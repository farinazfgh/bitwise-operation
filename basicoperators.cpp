#include <iostream>


#include "basicoperators.h"

void complement(int a, int b);

void logical_shift(int a, int b);

void andd(int a, int b);

void orr(int a, int b);

void xorr(int a, int b);

void logical_left_shift();

void logical_right_shift();

int main() {
    int a = 12, b = 25;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    andd(a, b);
    orr(a, b);
    xorr(a, b);
    complement(a, b);
    logical_shift(a, b);
    logical_left_shift();
    logical_right_shift();
    return 0;
}

void complement(int a, int b) {
    /*
     * It is important to note that the bitwise complement of any integer N is equal to -(N + 1). For example,
     * 35 = 00100011 (In Binary)

     Using bitwise complement operator
        ~   00100011
            __________
            11011100
     */
    std::cout << " ~a  = " << ~a << std::endl;
    int num1 = 35;
    int num2 = -150;
    std::cout << "~(" << num1 << ") = " << (~num1) << std::endl;
    std::cout << "~(" << num2 << ") = " << (~num2) << std::endl;
}

void andd(int a, int b) {
    /*
 00001100
&    00011001
 _________
 00001000  = 8 (In decimal)
*/
    std::cout << "a & b = " << (a & b) << std::endl;
}

void logical_left_shift() {

/*
  Left shift is equivalent to multiplying the bit pattern with  2^k( if we are shifting k bits ).
*/
    std::cout << "logical left shift" << std::endl;
    std::cout << "1 << 1 = " << (1 << 1) << std::endl;
    std::cout << "1 << 2 = " << (1 << 2) << std::endl;
    std::cout << "1 << 4 = " << (1 << 4) << std::endl;
}

void logical_right_shift() {

/*
  Right shift is equivalent to dividing the bit pattern with 2^k( if we are shifting k bits ).
*/
    std::cout << "logical right shift" << std::endl;
    std::cout << "4 >> 1 = " << (4 >> 1) << std::endl;
    std::cout << "6 >> 1 = " << (6 >> 1) << std::endl;
    std::cout << "16 >> 4 = " << (16 >> 4) << std::endl;
}

void orr(int a, int b) {
    /*
    00001100
|   00011001
    _________
    00011101  = 29 (In decimal)
     */
    std::cout << "a | b = " << (a | b) << std::endl;
}

void xorr(int a, int b) {
/*
    00001100
^   00011001
    _________
    00010101  = 21 (In decimal)
 */
    std::cout << "a ^ b = " << (a ^ b) << std::endl;
}

void logical_shift(int a, int b) {
//    N >> m = [ N >> (m-1) ] / 2
//    N << m = [ N << (m-1) ] * 2
    // declaring two integer variables
    int num = 212, i;

    // Shift Right Operation
    std::cout << "Shift Right:" << std::endl;

    // Using for loop for shifting num right from 0 bit to 3 bits
    for (i = 0; i < 4; i++) {
        std::cout << "212 >> " << i << " = " << (212 >> i) << std::endl;
    }

    // Shift Left Operation
    std::cout << "\nShift Left:" << std::endl;

    // Using for loop for shifting num left from 0 bit to 3 bits
    for (i = 0; i < 4; i++) {
        std::cout << "212 << " << i << " = " << (212 << i) << std::endl;
    }
}
