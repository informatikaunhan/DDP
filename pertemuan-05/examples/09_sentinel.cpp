#include <iostream>
using namespace std;
int main() {
    double x, total = 0.0; int count = 0;
    cout << "Nilai (-1 selesai): "; cin >> x;
    while (x != -1) {
        total += x; ++count;
        cout << "Nilai (-1 selesai): "; cin >> x;
    }
    if (count > 0) cout << "Rata-rata: " << total / count << "\n";
    else cout << "Tidak ada data.\n";
    return 0;
}
