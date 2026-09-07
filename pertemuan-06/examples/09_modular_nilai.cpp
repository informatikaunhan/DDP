#include <iostream>
#include <iomanip>
using namespace std;
bool valid(double x){ return x>=0 && x<=100; }
double akhir(double tugas,double uts,double uas){ return .30*tugas+.30*uts+.40*uas; }
bool lulus(double x,double batas=75.0){ return x>=batas; }
int main(){ double t,u,a; cin>>t>>u>>a; if(!valid(t)||!valid(u)||!valid(a)){ cout<<"Input tidak valid\n"; return 0; } double n=akhir(t,u,a); cout<<fixed<<setprecision(2)<<n<<"\n"<<(lulus(n)?"LULUS":"BELUM LULUS")<<"\n"; }
