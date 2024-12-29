#include "NitroExample.hpp"

#include <iostream>
#include <chrono>


namespace margelo::nitro::nitroexample {
  double NitroExample::add(double a, double b) {
    return a+b;
  }

  double NitroExample::getPi() {
    return 3.14159265358979323846;
  }  
}