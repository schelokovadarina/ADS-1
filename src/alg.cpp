// Copyright 2022 NNTU-CS
#include "alg.h"
#include <cstdint>
#include <cmath>
bool checkPrime(uint64_t value) {
if (value > 1) {
for (int i = 2; i <= (sqrt(abs(value))); i++)
if (value % i == 0) {
return false;
}
return true;
} else {
return false;
}
}

uint64_t nPrime(uint64_t n) {
uint64_t num = 0;
uint64_t i = 0;
while (i != n) {
num++;
if (checkPrime(num))
i++;
}
return num;
}

uint64_t nextPrime(uint64_t value) {
uint64_t nextnum = 0;
nextnum = nextnum + value + 1;
while (!(checkPrime(nextnum))) {
nextnum++;
}
return nextnum;
}

uint64_t sumPrime(uint64_t hbound) {
uint64_t sum = 0;
if (hbound > 2) {
for (int i = 2; i < hbound; i++)
if (checkPrime(i)) {
sum = sum + i;
}
}
return sum;
}
