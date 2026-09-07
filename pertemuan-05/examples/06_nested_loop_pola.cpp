#include <iostream>
using namespace std;
int main() {
    int tinggi;
    cout << "Tinggi: "; cin >> tinggi;
    for (int r = 1; r <= tinggi; ++r) {
        for (int c = 1; c <= r; ++c) cout << '*';
        cout << '\n';
    }
    return 0;
}
