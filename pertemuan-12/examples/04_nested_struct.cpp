#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct Waktu{int jam;int menit;}; struct Jadwal{string kegiatan;string lokasi;Waktu mulai;};
int main(){Jadwal j{"Praktikum DDP","Lab 2",{13,30}}; cout<<j.kegiatan<<" @ "<<setfill('0')<<setw(2)<<j.mulai.jam<<":"<<setw(2)<<j.mulai.menit<<"\
";}
