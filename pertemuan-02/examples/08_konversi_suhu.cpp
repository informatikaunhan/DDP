#include <iostream>

int main() {
    double celsius = 30.0;
    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    double kelvin = celsius + 273.15;

    std::cout << "Celsius    : " << celsius << std::endl;
    std::cout << "Fahrenheit : " << fahrenheit << std::endl;
    std::cout << "Kelvin     : " << kelvin << std::endl;
    return 0;
}
