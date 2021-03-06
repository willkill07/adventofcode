#include <algorithm>
#include <array>
#include <limits>
#include <vector>
#include "Solution.hpp"
#include "io.hpp"

template <> void solve <Day17> (bool part2, std::istream & is, std::ostream & os) {
  const int TARGET { 150 };
  std::vector <int> con;
  static std::array <int, TARGET + 1> best, ways;
  std::fill (std::begin (best), std::end (best), std::numeric_limits <int>::max() - 1);
  std::copy (std::istream_iterator <int> { is }, { }, std::back_inserter (con));
  std::sort (std::rbegin (con), std::rend (con));
  ways[0] = 1, best[0] = 0;
  for (auto && c : con)
    for (int rem { TARGET }; rem >= c; --rem)
      if (part2) {
        if (best[rem - c] + 1 < best[rem])
          best[rem] = best[rem-c] + 1, ways[rem] = 0;
        if (best[rem - c] + 1 == best[rem])
          ways[rem] += ways [rem - c];
      } else
        ways[rem] += ways[rem - c];
  os <<  ways [TARGET] << std::endl;
}
