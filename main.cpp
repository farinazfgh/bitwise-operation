#include <iostream>


/*int main() {
    uint16_t a = 10;
    uint16_t b = 20;
    uint16_t result = 0;
    uint16_t mask = 1;

    while (mask != 0) {
        uint16_t nextmask = mask << 1;
        if (a & mask) // If A has that bit set?
        {
// If result also has that bit set, set carry (next bit in result)
            if (result & mask)
                result ^=
                        nextmask; // This could also be |= instead of ^= .
// Flip this bit in result
            result ^=
                    mask;
        }
        if (b & mask) // If B has that bit set?
        {
// If result also has that bit set, set carry (next bit in result)
            if (result & mask)
                result ^=
                        nextmask; // This could also be |= instead of ^= .
// Flip this bit in result
            result ^=
                    mask;
        }
        mask = nextmask;
        std::cout << mask << std::endl;

    }
    std::cout << "Hello, bitwise operators!" << std::endl;
    return 0;
}*/
