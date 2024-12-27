///
/// HybridMathSpec.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include <NitroModules/JHybridObject.hpp>
#include <fbjni/fbjni.h>
#include "HybridMathSpec.hpp"




namespace margelo::nitro::example {

  using namespace facebook;

  class JHybridMathSpec: public jni::HybridClass<JHybridMathSpec, JHybridObject>,
                         public virtual HybridMathSpec {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/example/HybridMathSpec;";
    static jni::local_ref<jhybriddata> initHybrid(jni::alias_ref<jhybridobject> jThis);
    static void registerNatives();

  protected:
    // C++ constructor (called from Java via `initHybrid()`)
    explicit JHybridMathSpec(jni::alias_ref<jhybridobject> jThis) :
      HybridObject(HybridMathSpec::TAG),
      _javaPart(jni::make_global(jThis)) {}

  public:
    virtual ~JHybridMathSpec() {
      // Hermes GC can destroy JS objects on a non-JNI Thread.
      jni::ThreadScope::WithClassLoader([&] { _javaPart.reset(); });
    }

  public:
    size_t getExternalMemorySize() noexcept override;

  public:
    inline const jni::global_ref<JHybridMathSpec::javaobject>& getJavaPart() const noexcept {
      return _javaPart;
    }

  public:
    // Properties
    double getPi() override;

  public:
    // Methods
    double add(double a, double b) override;

  private:
    friend HybridBase;
    using HybridBase::HybridBase;
    jni::global_ref<JHybridMathSpec::javaobject> _javaPart;
  };

} // namespace margelo::nitro::example
