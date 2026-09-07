#include <iostream>
using namespace std;
int main() {
    int nilai;
    cout << "Nilai 0..100: "; cin >> nilai;
    while (nilai < 0 || nilai > 100) {
        cout << "Tidak valid. Ulangi: "; cin >> nilai;
    }
    cout << "Diterima: " << nilai << "\n";
    return 0;
}
