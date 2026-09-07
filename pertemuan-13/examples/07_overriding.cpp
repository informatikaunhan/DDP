#include <iostream>
using namespace std;
class Kendaraan{public:void info()const{cout<<"Kendaraan umum\n";}};
class Mobil:public Kendaraan{public:void info()const{cout<<"Mobil\n";}};
int main(){Kendaraan k;Mobil m;k.info();m.info();}
