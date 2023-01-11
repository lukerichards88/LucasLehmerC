//
// Created by lukerichards on 11/01/23.
//
#include <stdio.h>

int main() {
    unsigned p = 3;
    while (p < 32) {
        unsigned e = 0;
        unsigned Mp = 1;
        while (e < p) {
            Mp *= 2;
            ++e;
        }
        Mp -= 1;
        unsigned i = 0;
        unsigned Si = 4;
        while (i < (p - 2))
        {
            unsigned newSi;
            newSi = 0;
            unsigned multiplications = 0;
            while (multiplications < Si) {
                newSi = (newSi + Si) % Mp;
                ++multiplications;
            }
            Si = newSi - 2;
            ++i;
        }
        if (Si == 0) {
            printf("2^%d is prime: %d\n", p, Mp);
        }
        ++p;
        ++p;
    }
    return 0;
}
