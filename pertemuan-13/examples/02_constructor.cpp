#include <iostream>
#include <string>
using namespace std;
class Buku{string judul;int tahun;public:Buku():judul("Belum diisi"),tahun(0){}Buku(const string& j,int t):judul(j),tahun(t){}void tampil()const{cout<<judul<<" | "<<tahun<<"\n";}};
int main(){Buku a;Buku b("C++ Dasar",2026);a.tampil();b.tampil();}
