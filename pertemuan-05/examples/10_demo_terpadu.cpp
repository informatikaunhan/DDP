#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    char ulang;
    do {
        int n;
        do {
            cout << "Jumlah skor (>0): "; cin >> n;
        } while (n <= 0);
        int lulus = 0; double total = 0, minV = 0, maxV = 0;
        for (int i = 1; i <= n; ++i) {
            double s;
            cout << "Skor ke-" << i << " (0..100): "; cin >> s;
            while (s < 0 || s > 100) {
                cout << "Tidak valid. Ulangi: "; cin >> s;
            }
            if (i == 1) minV = maxV = s;
            if (s < minV) minV = s;
            if (s > maxV) maxV = s;
            if (s >= 75) ++lulus;
            total += s;
        }
        cout << fixed << setprecision(2)
             << "Rata-rata: " << total / n << "\n"
             << "Min: " << minV << " | Max: " << maxV << "\n"
             << "Lulus: " << lulus << "\n";
        cout << "Ulangi seluruh proses? (y/t): "; cin >> ulang;
    } while (ulang == 'y' || ulang == 'Y');
    return 0;
}
