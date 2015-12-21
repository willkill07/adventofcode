# Advent of Code - 2015

All implementations are written in C++, strictly adhering to C++11/14 guidelines.

## Compiling

* Invoke `make all` to compile all the days
* Invoke `make runall` to execute all the days
* To compile a specific day, invoke `make dayXX` where `XX` is the number of the day (zero padding required)
* To run a specific day, invoke `make run_dayXX`

## Metrics

* Lines: Number of lines given by `wc`
* Code: `Lines` - `(# preprocessor lines)` - `(lines with no alphanumeric chars)`
* Bytes: Number of total characters
* Chars: Number of non-whitespace characters
* Time: Time in seconds to execute each part independently (separate runs)
* Source: link to implementation
* Headers: C++ includes used for solution

## Leaderboard Highlights:

* Day 5: Placed #60
* Day 8: Placed #14
* Day 10: Placed #64
* Day 17: Placed #68
* Day 20: Placed #33

## Detailed Information

 Day | Lines | Code | Bytes | Chars | Time | Source | Headers
:---:|:-----:|:----:|:-----:|:-----:| ----:|:------:|:-------
01|11|7|307|233|0.0033|[day01.cpp](https://github.com/willkill07/adventofcode/blob/master/src/day01/day01.cpp)|`iostream` [`timer.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/timer.hpp)
02|22|12|624|490|0.0052|[day02.cpp](https://github.com/willkill07/adventofcode/blob/master/src/day02/day02.cpp)|`algorithm` `iostream` `regex` `string` [`timer.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/timer.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/io.hpp)
03|29|17|647|493|0.0076|[day03.cpp](https://github.com/willkill07/adventofcode/blob/master/src/day03/day03.cpp)|`iostream` `map` `tuple` [`timer.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/timer.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/io.hpp)
04|15|8|504|406|0.4815|[day04.cpp](https://github.com/willkill07/adventofcode/blob/master/src/day04/day04.cpp)|`iostream` `string` `md5.hpp` [`timer.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/timer.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/io.hpp)
05|17|8|630|517|0.0528|[day05.cpp](https://github.com/willkill07/adventofcode/blob/master/src/day05/day05.cpp)|`iostream` `regex` `string` [`timer.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/timer.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/io.hpp)
06|26|15|930|709|0.0181|[day06.cpp](https://github.com/willkill07/adventofcode/blob/master/src/day06/day06.cpp)|`iostream` `regex` `valarray` [`timer.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/timer.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/io.hpp)
07|66|44|2056|1510|0.0059|[day07.cpp](https://github.com/willkill07/adventofcode/blob/master/src/day07/day07.cpp)|`iostream` `map` `regex` `string` [`timer.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/timer.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/io.hpp)
08|27|13|753|586|0.0057|[day08.cpp](https://github.com/willkill07/adventofcode/blob/master/src/day08/day08.cpp)|`iostream` `iterator` `numeric` `regex` `string` [`timer.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/timer.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/io.hpp)
09|38|21|1217|973|0.0121|[day09.cpp](https://github.com/willkill07/adventofcode/blob/master/src/day09/day09.cpp)|`iostream` `limits` `numeric` `regex` `set` `string` `unordered_map` `vector` [`timer.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/timer.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/io.hpp)
10|22|12|664|508|0.0563|[day10.cpp](https://github.com/willkill07/adventofcode/blob/master/src/day10/day10.cpp)|`algorithm` `iostream` `iterator` `vector` [`timer.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/timer.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/io.hpp)
11|40|26|923|644|0.0175|[day11.cpp](https://github.com/willkill07/adventofcode/blob/master/src/day11/day11.cpp)|`iostream` `string` [`timer.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/timer.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/io.hpp)
12|37|27|1061|724|0.0277|[day12.cpp](https://github.com/willkill07/adventofcode/blob/master/src/day12/day12.cpp)|`iostream` `stack` `string` [`timer.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/timer.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/io.hpp)
13|36|21|1264|1009|0.0145|[day13.cpp](https://github.com/willkill07/adventofcode/blob/master/src/day13/day13.cpp)|`iostream` `limits` `numeric` `regex` `set` `string` `unordered_map` `vector` [`timer.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/timer.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/io.hpp)
14|53|32|1602|1187|0.0007|[day14.cpp](https://github.com/willkill07/adventofcode/blob/master/src/day14/day14.cpp)|`algorithm` `iostream` `regex` `string` `vector` [`timer.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/timer.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/io.hpp)
15|53|33|1743|1371|0.0078|[day15.cpp](https://github.com/willkill07/adventofcode/blob/master/src/day15/day15.cpp)|`iostream` `numeric` `regex` `valarray` `vector` [`timer.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/timer.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/io.hpp)
16|31|16|1274|1080|0.0047|[day16.cpp](https://github.com/willkill07/adventofcode/blob/master/src/day16/day16.cpp)|`functional` `iostream` `numeric` `regex` `unordered_map` [`timer.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/timer.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/io.hpp)
17|30|20|909|691|0.0001|[day17.cpp](https://github.com/willkill07/adventofcode/blob/master/src/day17/day17.cpp)|`array` `algorithm` `iostream` `limits` `vector` [`timer.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/timer.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/io.hpp)
18|40|26|1355|1043|0.0033|[day18.cpp](https://github.com/willkill07/adventofcode/blob/master/src/day18/day18.cpp)|`array` `iostream` [`timer.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/timer.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/io.hpp)
19|34|24|1134|882|0.0013|[day19.cpp](https://github.com/willkill07/adventofcode/blob/master/src/day19/day19.cpp)|`iostream` `regex` `string` `unordered_map` `unordered_set` [`io.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/io.hpp) [`timer.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/timer.hpp)
20|24|16|702|498|0.1780|[day20.cpp](https://github.com/willkill07/adventofcode/blob/master/src/day20/day20.cpp)|`iostream` `vector` [`io.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/io.hpp) [`timer.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/timer.hpp)
21|37|26|1496|1151|0.0002|[day21.cpp](https://github.com/willkill07/adventofcode/blob/master/src/day21/day21.cpp)|`array` `cmath` `iostream` `regex` [`io.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/io.hpp) [`timer.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/timer.hpp)
**TOTAL**|**688**|**424**|**21795**|**16705**|**0.9043**| | [`timer.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/timer.hpp)&nbsp;<sup>**`21`**</sup> `iostream`&nbsp;<sup>**`21`**</sup> [`io.hpp`](https://github.com/willkill07/adventofcode/blob/master/util/include/io.hpp)&nbsp;<sup>**`20`**</sup> `regex`&nbsp;<sup>**`12`**</sup> `string`&nbsp;<sup>**`11`**</sup> `vector`&nbsp;<sup>**`7`**</sup> `numeric`&nbsp;<sup>**`5`**</sup> `algorithm`&nbsp;<sup>**`4`**</sup> `unordered_map`&nbsp;<sup>**`4`**</sup> `limits`&nbsp;<sup>**`3`**</sup> `array`&nbsp;<sup>**`3`**</sup> `valarray`&nbsp;<sup>**`2`**</sup> `map`&nbsp;<sup>**`2`**</sup> `set`&nbsp;<sup>**`2`**</sup> `iterator`&nbsp;<sup>**`2`**</sup> `tuple`&nbsp;<sup>**`1`**</sup> `stack`&nbsp;<sup>**`1`**</sup> `cmath`&nbsp;<sup>**`1`**</sup> `md5.hpp`&nbsp;<sup>**`1`**</sup> `unordered_set`&nbsp;<sup>**`1`**</sup> `functional`&nbsp;<sup>**`1`**</sup>
