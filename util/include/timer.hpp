#ifndef _TIMER_HPP_
#define _TIMER_HPP_

#include <chrono>
#include <iostream>

struct
Timer
{
  using Timing = std::chrono::high_resolution_clock;
  using Point = std::chrono::time_point <Timing>;

  Point begin;

  Timer()
    : begin { Timing::now() }
    { }

  double current () {
    Point end { Timing::now() };
    return std::chrono::duration <double> { end - begin }.count();
  }

  ~Timer() {
    std::cout << "    time: " << current() << "s" << std::endl;
  }

};

Timer t;

#endif
