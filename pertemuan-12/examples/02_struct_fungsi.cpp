#include <iostream>
#include <string>
using namespace std;
struct Mahasiswa{string nim; string nama; double nilai;};
void bonus(Mahasiswa& m,double b){m.nilai+=b;}
void tampil(const Mahasiswa& m){cout<<m.nama<<" "<<m.nilai<<"\
";}
int main(){Mahasiswa m{"12001","Alya",80}; bonus(m,5); tampil(m);}
