#include<iostream>

int main() {
    int a = 5;
    int b = 3;

    int res;

    // & and
    std::cout << "bitwise and &: " << (a & b) << std::endl;

    // | or
    std::cout << "bitwise or |: " << (a | b) << std::endl;

    // ^ xor
    std::cout << "bitwise xor ^: " << (a ^ b) << std::endl;

    // ~ not
    std::cout << "bitwise not ~: " << ~a << std::endl;

    // << left shift
    std::cout << "bitwise leftshift <<: " << (a << 1) << std::endl;

    // << right shift
    std::cout << "bitwise rightshift >>: " << (a >> 1) << std::endl;

    return 0;
}