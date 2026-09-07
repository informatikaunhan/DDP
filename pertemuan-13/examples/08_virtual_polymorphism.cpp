#include <iostream>
using namespace std;
class Kendaraan{public:virtual void info()const{cout<<"Kendaraan umum\n";}};
class Mobil:public Kendaraan{public:void info()const override{cout<<"Mobil\n";}};
class Motor:public Kendaraan{public:void info()const override{cout<<"Motor\n";}};
void tampil(const Kendaraan& k){k.info();}
int main(){Kendaraan k;Mobil m;Motor t;tampil(k);tampil(m);tampil(t);}
