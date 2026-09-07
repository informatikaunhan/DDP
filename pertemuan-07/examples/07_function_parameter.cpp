#include <iostream>
using namespace std;

int kuadrat(int x) { return x * x; }
int negatif(int x) { return -x; }
int kaliDua(int x) { return x * 2; }

int terapkan(int x, int (*op)(int)) { return op(x); }

int main() {
    cout << terapkan(5, kuadrat) << '\n';
    cout << terapkan(5, negatif) << '\n';
    cout << terapkan(7, kaliDua) << '\n';
}
