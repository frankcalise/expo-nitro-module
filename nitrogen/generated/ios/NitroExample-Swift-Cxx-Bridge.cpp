///
/// NitroExample-Swift-Cxx-Bridge.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "NitroExample-Swift-Cxx-Bridge.hpp"

// Include C++ implementation defined types
#include "HybridMathSpecSwift.hpp"
#include "NitroExample-Swift-Cxx-Umbrella.hpp"

namespace margelo::nitro::example::bridge::swift {

  // pragma MARK: std::shared_ptr<margelo::nitro::example::HybridMathSpec>
  std::shared_ptr<margelo::nitro::example::HybridMathSpec> create_std__shared_ptr_margelo__nitro__example__HybridMathSpec_(void* _Nonnull swiftUnsafePointer) {
    NitroExample::HybridMathSpec_cxx swiftPart = NitroExample::HybridMathSpec_cxx::fromUnsafe(swiftUnsafePointer);
    return std::make_shared<margelo::nitro::example::HybridMathSpecSwift>(swiftPart);
  }
  void* _Nonnull get_std__shared_ptr_margelo__nitro__example__HybridMathSpec_(std__shared_ptr_margelo__nitro__example__HybridMathSpec_ cppType) {
    std::shared_ptr<margelo::nitro::example::HybridMathSpecSwift> swiftWrapper = std::dynamic_pointer_cast<margelo::nitro::example::HybridMathSpecSwift>(cppType);
  #ifdef NITRO_DEBUG
    if (swiftWrapper == nullptr) [[unlikely]] {
      throw std::runtime_error("Class \"HybridMathSpec\" is not implemented in Swift!");
    }
  #endif
    NitroExample::HybridMathSpec_cxx swiftPart = swiftWrapper->getSwiftPart();
    return swiftPart.toUnsafe();
  }

} // namespace margelo::nitro::example::bridge::swift
