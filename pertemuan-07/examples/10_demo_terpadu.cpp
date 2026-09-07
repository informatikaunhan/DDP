#include <iostream>
using namespace std;

int jumlahDigit(int n) {
    if (n < 0) n = -n;
    if (n < 10) return n;
    return (n % 10) + jumlahDigit(n / 10);
}

template <typename T>
T terbesar(T a, T b) { return (a > b) ? a : b; }

int kuadrat(int x) { return x * x; }
int terapkan(int x, int (*op)(int)) { return op(x); }

int main() {
    int kode; cout << "Kode bilangan: "; cin >> kode;
    int batas = 10;
    auto besar = [batas](int x) { return x >= batas; };
    int jd = jumlahDigit(kode);
    cout << "Jumlah digit: " << jd << '\n';
    cout << "Terbesar(kode,100): " << terbesar(kode, 100) << '\n';
    cout << "Jumlah digit >= 10? " << boolalpha << besar(jd) << '\n';
    cout << "Kuadrat jumlah digit: " << terapkan(jd, kuadrat) << '\n';
}
