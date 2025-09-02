#include <iostream>
using namespace std;

int main() {
    int a = 5;  // 0101 in binary
    int b = 6;  // 0110 in binary

    cout << "a = " << a << " (binary 0101)" << endl;
    cout << "b = " << b << " (binary 0110)" << endl << endl;

    // 1. Bitwise AND (&)
    cout << "a & b = " << (a & b) << "  -> AND (0101 & 0110 = 0100 = 4)" << endl;

    // 2. Bitwise OR (|)
    cout << "a | b = " << (a | b) << "  -> OR  (0101 | 0110 = 0111 = 7)" << endl;

    // 3. Bitwise XOR (^)
    cout << "a ^ b = " << (a ^ b) << "  -> XOR (0101 ^ 0110 = 0011 = 3)" << endl;

    // 4. Bitwise NOT (~)
    cout << "~a = " << (~a) << "  -> NOT (~0101 = ...1010 = -6)" << endl;

    // 5. Left shift (<<)
    cout << "a << 1 = " << (a << 1) << "  -> Shift left (0101 << 1 = 1010 = 10)" << endl;

    // 6. Right shift (>>)
    cout << "a >> 1 = " << (a >> 1) << "  -> Shift right (0101 >> 1 = 0010 = 2)" << endl;

    return 0;
}
