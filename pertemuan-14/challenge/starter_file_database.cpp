#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

class DataError : public runtime_error {
public:
    explicit DataError(const string& msg) : runtime_error(msg) {}
};

void logPesan(const string& level, const string& pesan) {
    // TODO: append ke data/error.log; fallback ke cerr bila log gagal
}

void tambahData(const string& path) {
    // TODO: input nama dan nilai, validasi, append ke file
}

void tampilkanData(const string& path) {
    // TODO: baca semua record; laporkan malformed record
}

void cariData(const string& path) {
    // TODO: cari berdasarkan nama
}

void updateData(const string& path) {
    // TODO: boleh baca semua -> tulis file sementara -> replace
}

void hapusData(const string& path) {
    // TODO: pola serupa update
}

int main() {
    const string path = "data/nilai.csv";
    while (true) {
        try {
            cout << "1 Tambah\n2 List\n3 Cari\n4 Update\n5 Hapus\n0 Keluar\n> ";
            int pilih;
            if (!(cin >> pilih)) throw DataError("menu bukan angka");
            cin.ignore(10000, '\n');
            if (pilih == 0) break;
            // TODO dispatch menu
        } catch (const DataError& e) {
            logPesan("DATA", e.what());
            cerr << "Data error: " << e.what() << '\n';
        } catch (const exception& e) {
            logPesan("ERROR", e.what());
            cerr << "Error: " << e.what() << '\n';
        }
    }
}
