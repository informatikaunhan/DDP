#include <iostream>

int main() {
    int level = 1;
    const int LEVEL_MAKS = 5;

    std::cout << "Level awal: " << level << std::endl;
    level = 2;
    level += 2;
    std::cout << "Level akhir: " << level << std::endl;
    std::cout << "Level maksimum: " << LEVEL_MAKS << std::endl;
    return 0;
}
