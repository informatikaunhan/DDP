#include <iostream>
using namespace std;
int main() {
    int n; long long total = 0;
    cout << "N: "; cin >> n;
    for (int i = 1; i <= n; ++i) total += i;
    cout << "Jumlah 1..N = " << total << "\n";
    return 0;
}
