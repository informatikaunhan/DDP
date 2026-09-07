#include <iostream>

int main() {
    int jumlah = 24;
    float tegangan = 12.5f;
    double suhu = 28.75;
    char kategori = 'A';
    bool aktif = true;

    std::cout << jumlah << std::endl;
    std::cout << tegangan << std::endl;
    std::cout << suhu << std::endl;
    std::cout << kategori << std::endl;
    std::cout << aktif << std::endl;

    std::cout << "sizeof(int)    = " << sizeof(int) << std::endl;
    std::cout << "sizeof(float)  = " << sizeof(float) << std::endl;
    std::cout << "sizeof(double) = " << sizeof(double) << std::endl;
    std::cout << "sizeof(char)   = " << sizeof(char) << std::endl;
    std::cout << "sizeof(bool)   = " << sizeof(bool) << std::endl;
    return 0;
}
