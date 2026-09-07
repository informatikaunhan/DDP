#include <iostream>
using namespace std;

template <typename T>
T terbesar(T a, T b) { return (a > b) ? a : b; }

template <typename T>
T terkecil(T a, T b) { return (a < b) ? a : b; }

int main() {
    cout << terbesar(4, 9) << '\n';
    cout << terbesar(3.5, 2.1) << '\n';
    cout << terkecil('z', 'm') << '\n';
}
