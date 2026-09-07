#include <iostream>
#include <string>
using namespace std;
class Mahasiswa{private:string nim,nama;public:void setData(const string& n,const string& nm){nim=n;nama=nm;}void tampil()const{cout<<nim<<" | "<<nama<<"\n";}};
int main(){Mahasiswa m;m.setData("12001","Alya");m.tampil();}
