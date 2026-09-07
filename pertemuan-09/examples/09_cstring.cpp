#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char teks[30];
    cout << "Masukkan teks singkat: ";
    cin.getline(teks, 30);
    cout << "Teks: " << teks << '\n';
    cout << "Panjang: " << strlen(teks) << '\n';
}
