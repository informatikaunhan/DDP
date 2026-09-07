#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << left << setw(18) << "Parameter" << right << setw(12) << "Nilai" << '\n';
    cout << setfill('-') << setw(30) << "" << setfill(' ') << '\n';
    cout << left << setw(18) << "Kesiapan (%)" << right << fixed << setprecision(2) << setw(12) << 92.375 << '\n';
    cout << left << setw(18) << "Durasi (jam)" << right << setw(12) << 3.5 << '\n';
    return 0;
}
