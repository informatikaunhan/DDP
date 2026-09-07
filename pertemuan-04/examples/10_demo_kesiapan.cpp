#include <iostream>
#include <string>
using namespace std;
int main(){int nilai,hadir,aman,menu; cin>>nilai>>hadir>>aman>>menu; if(nilai<0||nilai>100||hadir<0||hadir>100){cout<<"INPUT INVALID\n";return 1;} char kat; if(nilai>=85)kat='A'; else if(nilai>=75)kat='B'; else if(nilai>=65)kat='C'; else if(nilai>=55)kat='D'; else kat='E'; bool lulus=nilai>=75&&hadir>=80&&aman==1; string s=lulus?"LULUS":"TIDAK LULUS"; switch(menu){case 1:cout<<s<<'\n';break;case 2:cout<<"Kategori "<<kat<<", hadir "<<hadir<<"%\n";break;case 3:cout<<"Kategori "<<kat<<", "<<s<<", keamanan "<<(aman?"AMAN":"CEK")<<'\n';break;default:cout<<"MENU INVALID\n";} }
