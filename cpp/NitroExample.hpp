#include <vector>
#include <string>
#include <NitroModules/ArrayBuffer.hpp>
#include "HybridMathSpec.hpp"

namespace margelo::nitro::nitroexample {

class NitroExample : public HybridMathSpec {
 public:
  NitroExample() : HybridObject(TAG), HybridMathSpec() {}

  double add(double a, double b) override;

  double getPi() override;
};
 
}  