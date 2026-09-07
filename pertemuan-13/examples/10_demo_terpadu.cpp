#include <iostream>
#include <string>
using namespace std;
class Kendaraan{string id;bool aktif;public:Kendaraan(const string& i,bool a=true):id(i),aktif(a){}string getId()const{return id;}bool isAktif()const{return aktif;}virtual void tampil()const{cout<<"Kendaraan "<<id<<"\n";}};
class Mobil:public Kendaraan{int pintu;public:Mobil(const string& id,int p):Kendaraan(id),pintu(p){}void tampil()const override{cout<<"Mobil "<<getId()<<" | pintu="<<pintu<<" | "<<(isAktif()?"aktif":"nonaktif")<<"\n";}};
class Motor:public Kendaraan{int cc;public:Motor(const string& id,int c):Kendaraan(id),cc(c){}void tampil()const override{cout<<"Motor "<<getId()<<" | cc="<<cc<<" | "<<(isAktif()?"aktif":"nonaktif")<<"\n";}};
int main(){Mobil a("OPS-01",4),b("OPS-02",2);Motor c("OPS-03",150);Kendaraan* d[3]={&a,&b,&c};for(Kendaraan* k:d)k->tampil();}
