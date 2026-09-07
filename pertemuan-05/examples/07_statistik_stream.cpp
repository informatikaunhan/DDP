#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n, lulus = 0;
    double x, total = 0.0, minVal = 0.0, maxVal = 0.0;
    cout << "Jumlah data: "; cin >> n;
    if (n <= 0) { cout << "N harus > 0\n"; return 0; }
    for (int i = 1; i <= n; ++i) {
        cout << "Data ke-" << i << ": "; cin >> x;
        if (i == 1) minVal = maxVal = x;
        if (x < minVal) minVal = x;
        if (x > maxVal) maxVal = x;
        if (x >= 75) ++lulus;
        total += x;
    }
    cout << fixed << setprecision(2);
    cout << "Rata-rata: " << total / n << "\n";
    cout << "Min: " << minVal << " | Max: " << maxVal << "\n";
    cout << ">=75: " << lulus << "\n";
    return 0;
}
