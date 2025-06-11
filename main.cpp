#include "PrefixAdder8.hpp"
#include "FlaggedPrefixAdder8.hpp"


int main() {
    uint8_t A = 0b00000010;
    uint8_t B = 0b00100000;
    PrefixAdder8 adder(A, B);
    adder.printDebug();

        // Przykład 1: Normalne dodawanie (bez flag)
    FlaggedPrefixAdder8 adder1(A, B);
    adder1.printDebug();
    std::cout << "\n";
    
    // Przykład 2: Z flagami blokującymi carry
    FlaggedPrefixAdder8 adder2(A, B, true, true);
    adder2.printDebug();
    std::cout << "\n";

    return 0;
}
