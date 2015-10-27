#pragma once

#include "parity.h"

enum Parity {none, odd, even};

Parity parityTest(const char word[], int& nEven, int &nOdd);
