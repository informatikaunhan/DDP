#include <iostream>
using namespace std;

long long faktorial(int n) {
    if (n <= 1) return 1;
    return n * faktorial(n - 1);
}

int main() {
    int n;
    cout << "n (0..20): ";
    if (!(cin >> n) || n < 0 || n > 20) {
        cerr << "Input tidak valid.\n";
        return 1;
    }
    cout << n << "! = " << faktorial(n) << '\n';
}
