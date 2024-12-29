project(NitroExample)
cmake_minimum_required(VERSION 3.22.1)

# This file includes all the necessary to let you build your application with the New Architecture.
# include(${REACT_ANDROID_DIR}/cmake-utils/ReactNative-application.cmake)

set (PACKAGE_NAME NitroExample)
set (CMAKE_VERBOSE_MAKEFILE ON)
set (CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE CORE_SRC RELATIVE ${CMAKE_SOURCE_DIR} "../../cpp/**/*.cpp")
file(GLOB_RECURSE PLATFORM_SRC RELATIVE ${CMAKE_SOURCE_DIR} "./src/main/cpp/*.cpp")

# Define C++ library and add all sources
add_library(${PACKAGE_NAME} SHARED
        src/main/cpp/cpp-adapter.cpp
        ../../cpp/NitroExample.cpp
        ../../cpp/NitroExample.hpp
)

# Add Nitrogen specs :)
include(${CMAKE_SOURCE_DIR}/../../nitrogen/generated/android/NitroExample+autolinking.cmake)

# Set up local includes
include_directories(
        "src/main/cpp"
        "../../cpp"
)

find_library(LOG_LIB log)

# Link all libraries together
target_link_libraries(
        ${PACKAGE_NAME}
        ${LOG_LIB}
        android                                   # <-- Android core
        fbjni::fbjni                              # <-- Facebook C++ JNI helpers
        ReactAndroid::jsi                         # <-- RN: JSI
)

# Link react-native (different prefab between RN 0.75 and RN 0.76)
if(ReactAndroid_VERSION_MINOR GREATER_EQUAL 76)
    target_link_libraries(
        NitroExample
        ReactAndroid::reactnative                 # <-- RN: Native Modules umbrella prefab
    )
else()
    target_link_libraries(
        NitroExample
        ReactAndroid::react_nativemodule_core     # <-- RN: TurboModules Core
        ReactAndroid::turbomodulejsijni           # <-- RN: TurboModules utils (e.g. CallInvokerHolder)
    )
endif()