#include <iostream>
#include <iomanip>
using namespace std;

const int TIM = 4;
const int INDIKATOR = 5;

void input(int a[][INDIKATOR], int tim) {
    // TODO: isi seluruh skor dengan validasi 0..100
}

void tampil(const int a[][INDIKATOR], int tim) {
    // TODO
}

double rataTim(const int a[][INDIKATOR], int row) {
    // TODO
    return 0.0;
}

double rataIndikator(const int a[][INDIKATOR], int tim, int col) {
    // TODO
    return 0.0;
}

void cariMaks(const int a[][INDIKATOR], int tim, int &r, int &c) {
    // TODO
}

int main() {
    int data[TIM][INDIKATOR]{};
    input(data, TIM);
    // TODO: tampil, rata per tim/indikator, maksimum, transpose
    return 0;
}
