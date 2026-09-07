#include <iostream>
#include <limits>
using namespace std;
int main() {
    int jumlah;
    cout << "Jumlah perangkat: ";
    cin >> jumlah;
    if (cin.fail()) {
        cout << "Input tidak valid.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else {
        cout << "Jumlah diterima: " << jumlah << '\n';
    }
    return 0;
}
