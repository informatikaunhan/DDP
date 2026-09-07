#include <iostream>
using namespace std;

void hanoi(int n, char asal, char bantu, char tujuan) {
    if (n <= 0) return;
    if (n == 1) {
        cout << "Cakram 1: " << asal << " -> " << tujuan << '\n';
        return;
    }
    hanoi(n - 1, asal, tujuan, bantu);
    cout << "Cakram " << n << ": " << asal << " -> " << tujuan << '\n';
    hanoi(n - 1, bantu, asal, tujuan);
}

int main() {
    int n; cout << "Jumlah cakram: "; cin >> n;
    if (n < 1 || n > 12) { cerr << "Gunakan 1..12.\n"; return 1; }
    hanoi(n, 'A', 'B', 'C');
}
