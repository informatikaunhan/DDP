#include <iostream>

int main() {
    unsigned int a = 6;
    unsigned int b = 3;
    std::cout << "a & b  = " << (a & b) << std::endl;
    std::cout << "a | b  = " << (a | b) << std::endl;
    std::cout << "a ^ b  = " << (a ^ b) << std::endl;
    std::cout << "a << 1 = " << (a << 1) << std::endl;
    std::cout << "a >> 1 = " << (a >> 1) << std::endl;
    return 0;
}
