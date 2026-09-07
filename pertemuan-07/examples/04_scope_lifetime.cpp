#include <iostream>
using namespace std;

void demo() {
    int lokal = 0;
    static int tetap = 0;
    ++lokal; ++tetap;
    cout << "lokal=" << lokal << ", tetap=" << tetap << '\n';
}

int main() {
    demo(); demo(); demo();
    if (true) {
        int dalamBlok = 99;
        cout << "dalam blok=" << dalamBlok << '\n';
    }
    // cout << dalamBlok; // aktifkan untuk melihat compile error scope
}
