#include "parity.h"

const char ONE = (char) 0x0001;
const char ZERO = (char) 0x0000;

bool isEvenParity(char c) {

  return c & ONE;
}

bool isOddParity(char c) {

  return !isOddParity(c);
}
