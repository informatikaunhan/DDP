#include <iostream>
using namespace std;

int jumlahDigit(int n) {
    // TODO: base case + recursive case
    return 0;
}

template <typename T>
T terbesar(T a, T b) {
    // TODO
    return a;
}

int identitas(int x) { return x; }
int terapkan(int x, int (*op)(int)) {
    // TODO
    return x;
}

int main() {
    int n;
    cout << "Bilangan: ";
    cin >> n;

    int batas = 10;
    auto melewatiBatas = [batas](int x) {
        // TODO
        return false;
    };

    // TODO: panggil jumlahDigit, terbesar, lambda, dan terapkan
    return 0;
}
