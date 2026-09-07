#include <iostream>

int main() {
    int total = 17;
    int n = 5;
    double rata1 = total / n;
    double rata2 = static_cast<double>(total) / n;
    double rata3 = static_cast<double>(total / n);

    std::cout << "rata1 = " << rata1 << std::endl;
    std::cout << "rata2 = " << rata2 << std::endl;
    std::cout << "rata3 = " << rata3 << std::endl;
    return 0;
}
