#include <iostream>
#include <iomanip>
using namespace std;
bool validSkor(int s){ return s>=0 && s<=100; }
int bacaSkor(const char* label){ int s; do{ cout<<label<<" (0..100): "; cin>>s; }while(!validSkor(s)); return s; }
double nilaiAkhir(int teori,int praktik){ return .60*teori+.40*praktik; }
char kategori(double n){ if(n>=85)return 'A'; if(n>=75)return 'B'; if(n>=65)return 'C'; if(n>=50)return 'D'; return 'E'; }
void urutkan(int& a,int& b){ if(a>b){ int t=a; a=b; b=t; } }
void laporan(int teori,int praktik,double batasLulus=75.0){ double n=nilaiAkhir(teori,praktik); cout<<fixed<<setprecision(2)<<"Nilai akhir: "<<n<<"\nKategori: "<<kategori(n)<<"\nStatus: "<<(n>=batasLulus?"LULUS":"BELUM LULUS")<<"\n"; }
int main(){ int teori=bacaSkor("Teori"), praktik=bacaSkor("Praktik"); int rendah=teori,tinggi=praktik; urutkan(rendah,tinggi); cout<<"Rentang skor: "<<rendah<<".."<<tinggi<<"\n"; laporan(teori,praktik); return 0; }
