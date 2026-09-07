#include <fstream>
#include <iostream>
using namespace std;
int main() {
    ofstream file("rekap.txt");
    if (!file) {
        cerr << "File gagal dibuka.\n";
        return 1;
    }
    file << "Status: SIAP\n";
    file << "Personel: 32\n";
    cout << "rekap.txt berhasil dibuat.\n";
    return 0;
}
