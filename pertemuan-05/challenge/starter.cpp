#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char ulang;

    do {
        // TODO 1: baca N dan validasi N > 0

        // TODO 2: siapkan total, min, max, dan counter lulus

        // TODO 3: for sebanyak N data
        //   - baca skor
        //   - validasi 0..100 dengan while
        //   - update min/max
        //   - update total dan lulus

        // TODO 4: tampilkan statistik

        // TODO 5: tampilkan maksimal 10 bintang sesuai jumlah lulus

        cout << "Ulangi? (y/t): ";
        cin >> ulang;
    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}
