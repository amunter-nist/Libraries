// Copyright Benoit Blanchon 2014-2017
// MIT License
//
// Arduino JSON library
// https://bblanchon.github.io/ArduinoJson/
// If you like this project, please add a star!

#pragma once

#include "./ctype.hpp"

namespace ArduinoJson {
namespace Polyfills {

inline bool isInteger(const char* s) {
  if (!s) return false;
  if (issign(*s)) s++;
  while (isdigit(*s)) s++;
  return *s == '\0';
}
}
}
