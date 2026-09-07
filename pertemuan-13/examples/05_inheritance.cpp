#include <iostream>
#include <string>
using namespace std;
class Kendaraan{string id;public:Kendaraan(const string& x):id(x){}string getId()const{return id;}};
class Mobil:public Kendaraan{int pintu;public:Mobil(const string& id,int p):Kendaraan(id),pintu(p){}void tampil()const{cout<<"Mobil "<<getId()<<" | pintu="<<pintu<<"\n";}};
int main(){Mobil m("OPS-01",4);m.tampil();}
