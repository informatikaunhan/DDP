#include <iostream>
using namespace std;
int main() {
    int n, target;
    cout << "Jumlah data: "; cin >> n;
    cout << "Target: "; cin >> target;
    bool ditemukan = false;
    for (int urut = 1; urut <= n; ++urut) {
        int x; cout << "Data ke-" << urut << ": "; cin >> x;
        if (x == target) {
            cout << "Ditemukan pada urutan " << urut << "\n";
            ditemukan = true;
            break;
        }
    }
    if (!ditemukan) cout << "Tidak ditemukan.\n";
    return 0;
}
