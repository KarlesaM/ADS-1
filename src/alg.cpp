// Copyright 2022 NNTU-CS
#include <cstdint>
#include <iostream>
#include "alg.h"


bool checkPrime(uint64_t value) {
// вставьте код функции
  for (int k = 2; k < value; k++) {
    if (value % k == 0)
    return false;
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
  uint64_t z = 0;
  uint64_t k = 2;
  while (z < n) {
    if (checkPrime(k)) {
      z++;
    }
    k++;
  }
  return k - 1;
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
  while (true) {
    value++;
    if (checkPrime(value)) {
      break;
    }
  }
  return value;
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
  uint64_t sum = 0;
  for (int k = 2; k < hbound; k++) {
    if (checkPrime(k) == 1)
      sum += k;
  }
  return sum;
}

int main() {
    int z = 7;
    std::cout << checkPrime(z) << std::endl;
    return 0;
}
