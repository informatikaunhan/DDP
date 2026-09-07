#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main() {
    ifstream file("rekap.txt");
    if (!file) {
        cerr << "Jalankan 08_file_output_intro.cpp lebih dahulu.\n";
        return 1;
    }
    string baris;
    getline(file, baris);
    cout << "Baris pertama: " << baris << '\n';
    return 0;
}
