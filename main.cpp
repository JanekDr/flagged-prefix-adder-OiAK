#include "PrefixAdder8.hpp"

int main() {
    uint8_t A = 0b00010001; //255
    uint8_t B = 0b00100001; //255

    PrefixAdder8 adder(A, B);
    adder.printDebug();

    return 0;
}
