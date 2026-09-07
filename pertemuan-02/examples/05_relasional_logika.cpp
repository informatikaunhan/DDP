#include <iostream>

int main() {
    int suhu = 29;
    int baterai = 65;
    bool suhuAman = suhu <= 30;
    bool bateraiCukup = baterai >= 50;
    bool siap = suhuAman && bateraiCukup;

    std::cout << "suhuAman = " << suhuAman << std::endl;
    std::cout << "bateraiCukup = " << bateraiCukup << std::endl;
    std::cout << "siap = " << siap << std::endl;
    return 0;
}
