#include <iostream>
#include <string>
using namespace std;
int main() {
    int angkatan;
    string nama;
    cout << "Angkatan: "; cin >> angkatan;
    cout << "Nama lengkap: "; getline(cin >> ws, nama);
    cout << "Angkatan " << angkatan << " | " << nama << '\n';
    return 0;
}
