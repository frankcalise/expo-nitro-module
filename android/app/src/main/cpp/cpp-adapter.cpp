#include <jni.h>
#include "NitroExampleOnLoad.hpp"

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void*) {
  return margelo::nitro::nitroexample::initialize(vm);
}