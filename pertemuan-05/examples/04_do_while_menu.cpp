#include <iostream>
using namespace std;
int main() {
    char pilih;
    do {
        cout << "\n[A] Pesan\n[X] Keluar\nPilih: "; cin >> pilih;
        if (pilih == 'A' || pilih == 'a') cout << "Latihan berjalan.\n";
    } while (pilih != 'X' && pilih != 'x');
    return 0;
}
