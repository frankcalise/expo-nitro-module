import { HybridObject } from "react-native-nitro-modules";

export interface Math extends HybridObject<{ ios: "c++"; android: "c++" }> {
  readonly pi: number;
  add(a: number, b: number): number;
}
