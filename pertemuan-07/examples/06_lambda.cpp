#include <iostream>
using namespace std;

int main() {
    int batas = 75;
    auto byValue = [batas](double nilai) { return nilai >= batas; };
    auto byRef = [&batas](double nilai) { return nilai >= batas; };

    batas = 60;
    cout << boolalpha;
    cout << "capture value, 70: " << byValue(70) << '\n';
    cout << "capture ref,   70: " << byRef(70) << '\n';
}
