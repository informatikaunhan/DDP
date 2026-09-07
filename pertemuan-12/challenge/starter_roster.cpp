#include <iostream>
#include <string>
using namespace std;

enum class Status { BelumSiap, Siap, SangatSiap };
struct Identitas { string nama; string unit; };
struct Anggota { int id; Identitas identitas; int skor; Status status; };

string label(Status s) {
    // TODO
    return "?";
}

void tampilkan(const Anggota& a) {
    // TODO
}

int cariId(const Anggota data[], int n, int id) {
    // TODO
    return -1;
}

double rataRata(const Anggota data[], int n) {
    // TODO
    return 0.0;
}

int main() {
    Anggota data[20];
    int n = 0;
    // TODO: menu input/update/tampil/cari/statistik/keluar
    cout << "Starter Roster Kesiapan Tim\
";
    return 0;
}
