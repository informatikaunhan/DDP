#include <iostream>
using namespace std;

long long faktorialTrace(int n) {
    cout << "ENTER n=" << n << '\n';
    if (n <= 1) {
        cout << "BASE  n=" << n << '\n';
        return 1;
    }
    long long hasil = n * faktorialTrace(n - 1);
    cout << "EXIT  n=" << n << " hasil=" << hasil << '\n';
    return hasil;
}

int main() { cout << "HASIL=" << faktorialTrace(4) << '\n'; }
