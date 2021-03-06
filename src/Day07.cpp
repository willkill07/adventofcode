#include <unordered_map>
#include "Solution.hpp"
#include "io.hpp"

const std::regex ASSIGN_OP { R"((\w+) -> (\w+))" }, NOT_OP { R"(NOT (\w+) -> (\w+))" }, BINARY_OP { R"((\w+) (AND|OR|LSHIFT|RSHIFT) (\w+) -> (\w+))" };

using Int = std::uint16_t;
using Callback = std::function <Int (Int, Int)>;

struct Gate {
  Callback fn;
  std::string wire1, wire2;
  bool memoized { false };
  Int value;
  Gate (std::string w1, std::string w2, Callback f) : fn { f }, wire1 { w1 }, wire2 { w2 } { }
  Gate (std::string w1, Callback f) : Gate (w1, w1, f) { };
  Gate (Int v) : memoized { true }, value { v } { };
};

struct Circuit {
  std::unordered_map <std::string, Gate> lookup;

  void  set (std::string key, Int v) {
    lookup.at (key) = Gate { v };
  }

  Int get (std::string value) {
    try {
      return std::stoi (value);
    } catch (...) {
      auto & d = lookup.at (value);
      if (d.memoized)
        return d.value;
      d.value = d.fn (get (d.wire1), get (d.wire2)), d.memoized = true;
      return d.value;
    }
  }

  void operator() (std::string line) {
    std::smatch m;
    if (std::regex_match (line, m, ASSIGN_OP)) {
      lookup.emplace (m.str (2), Gate { m.str (1), [] (Int a, Int b) { return b = a; } });
    } else if (std::regex_match (line, m, NOT_OP)) {
      lookup.emplace (m.str (2), Gate { m.str (1) , [] (Int a, Int b) { return b = ~a; } });
    } else if (std::regex_match (line, m, BINARY_OP)) {
      lookup.emplace (m.str (4), Gate { m.str (1), m.str (3),
            ((m.str (2) == "AND") ? [] (Int a, Int b) { return a & b; } :
             ((m.str (2) == "OR") ? [] (Int a, Int b) { return a | b; } :
              ((m.str (2) == "LSHIFT") ? [] (Int a, Int b) { return a << b; } :
               [] (Int a, Int b) { return a >> b; }))) });
    }
  }
};

template <> void solve <Day07> (bool part2, std::istream & is, std::ostream & os) {
  Circuit c;
  std::for_each (io::as <io::line> (is), { }, std::ref (c));
  if (part2)
    c.set ("b", 956);
  os << c.get ("a") << std::endl;
}
