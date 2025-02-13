///
/// NitroExample-Swift-Cxx-Umbrella.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

// Forward declarations of C++ defined types


// Include C++ defined types


// C++ helpers for Swift
#include "NitroExample-Swift-Cxx-Bridge.hpp"

// Common C++ types used in Swift
#include <NitroModules/ArrayBufferHolder.hpp>
#include <NitroModules/AnyMapHolder.hpp>
#include <NitroModules/HybridContext.hpp>
#include <NitroModules/RuntimeError.hpp>

// Forward declarations of Swift defined types


// Include Swift defined types
#if __has_include("NitroExample-Swift.h")
// This header is generated by Xcode/Swift on every app build.
// If it cannot be found, make sure the Swift module's name (= podspec name) is actually "NitroExample".
#include "NitroExample-Swift.h"
// Same as above, but used when building with frameworks (`use_frameworks`)
#elif __has_include(<NitroExample/NitroExample-Swift.h>)
#include <NitroExample/NitroExample-Swift.h>
#else
#error NitroExample's autogenerated Swift header cannot be found! Make sure the Swift module's name (= podspec name) is actually "NitroExample", and try building the app first.
#endif
