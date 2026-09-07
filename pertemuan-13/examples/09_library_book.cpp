#include <iostream>
#include <string>
using namespace std;
class Buku{string kode,judul;bool dipinjam=false;public:Buku(const string& k,const string& j):kode(k),judul(j){}bool pinjam(){if(dipinjam)return false;dipinjam=true;return true;}void kembali(){dipinjam=false;}void tampil()const{cout<<kode<<" | "<<judul<<" | "<<(dipinjam?"Dipinjam":"Tersedia")<<"\n";}};
int main(){Buku b("B001","Dasar C++");b.tampil();cout<<boolalpha<<b.pinjam()<<"\n";b.tampil();cout<<b.pinjam()<<"\n";b.kembali();b.tampil();}
