#include <iostream>
#include <string>
using namespace std;

class Kendaraan {
private:
    string id;
    bool aktif;
public:
    Kendaraan(const string& idBaru, bool status = true)
        : id(idBaru), aktif(status) {}

    string getId() const { return id; }
    bool isAktif() const { return aktif; }
    void setAktif(bool status) { aktif = status; }

    virtual void tampilkan() const {
        cout << "Kendaraan " << id << "\n";
    }
};

class Mobil : public Kendaraan {
private:
    int jumlahPintu;
public:
    Mobil(const string& id, int pintu)
        : Kendaraan(id), jumlahPintu(pintu) {}

    void tampilkan() const override {
        // TODO: tampilkan id, pintu, dan status
    }
};

class Motor : public Kendaraan {
private:
    int kapasitasCC;
public:
    Motor(const string& id, int cc)
        : Kendaraan(id), kapasitasCC(cc) {}

    void tampilkan() const override {
        // TODO
    }
};

int cariId(Kendaraan* data[], int n, const string& id) {
    // TODO
    return -1;
}

int main() {
    Mobil m1("OPS-01", 4);
    Mobil m2("OPS-02", 2);
    Motor t1("OPS-03", 150);
    Motor t2("OPS-04", 250);

    Kendaraan* data[4] = {&m1, &m2, &t1, &t2};

    // TODO: tampilkan semua, cari ID, ubah status salah satu object,
    // lalu tampilkan ulang.
    cout << "Starter Sistem Kendaraan Operasional\n";
    return 0;
}
