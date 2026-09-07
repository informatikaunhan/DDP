#include <iostream>
using namespace std;
int cari(const int a[], int n, int target) {
    for (int i = 0; i < n; ++i)
        if (a[i] == target) return i;
    return -1;
}
int main() {
    int a[] = {72,88,95,81,76,90};
    int idx = cari(a, 6, 90);
    if (idx != -1) cout << "Ditemukan di indeks " << idx << '\n';
    else cout << "Tidak ditemukan\n";
}
