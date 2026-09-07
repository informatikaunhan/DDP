#include <iostream>
#include <string>
using namespace std;
enum class Kondisi{Baik,PerluPerawatan,Rusak};
struct Barang{int id;string nama;int jumlah;Kondisi kondisi;};
string label(Kondisi k){switch(k){case Kondisi::Baik:return "Baik";case Kondisi::PerluPerawatan:return "Perlu perawatan";case Kondisi::Rusak:return "Rusak";} return "?";}
int cari(const Barang d[],int n,int id){for(int i=0;i<n;++i) if(d[i].id==id) return i; return -1;}
int total(const Barang d[],int n){int t=0;for(int i=0;i<n;++i)t+=d[i].jumlah;return t;}
int main(){Barang d[3]={{101,"Kabel",5,Kondisi::Baik},{102,"Mouse",3,Kondisi::PerluPerawatan},{103,"Adaptor",2,Kondisi::Baik}}; for(const auto& b:d) cout<<b.id<<" "<<b.nama<<" "<<b.jumlah<<" "<<label(b.kondisi)<<"\
"; cout<<"Total="<<total(d,3)<<"\
"; cout<<"Index 102="<<cari(d,3,102)<<"\
";}
