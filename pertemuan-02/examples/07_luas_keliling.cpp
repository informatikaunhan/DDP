#include <iostream>

int main() {
    double panjang = 12.5;
    double lebar = 8.0;
    double luas = panjang * lebar;
    double keliling = 2 * (panjang + lebar);

    std::cout << "Panjang  : " << panjang << std::endl;
    std::cout << "Lebar    : " << lebar << std::endl;
    std::cout << "Luas     : " << luas << std::endl;
    std::cout << "Keliling : " << keliling << std::endl;
    return 0;
}
