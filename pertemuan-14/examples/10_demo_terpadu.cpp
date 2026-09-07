#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;
void logError(const string& m){ofstream l("error.log",ios::app);if(l)l<<m<<'\n';else cerr<<"LOG-FALLBACK: "<<m<<'\n';}
void simpan(const string& nama,int nilai){if(nama.empty())throw invalid_argument("nama kosong");if(nilai<0||nilai>100)throw out_of_range("nilai 0..100");ofstream o("nilai.csv",ios::app);if(!o)throw runtime_error("file nilai gagal dibuka");o<<nama<<','<<nilai<<'\n';if(!o)throw runtime_error("write gagal");}
int main(){try{simpan("Alya",88);cout<<"tersimpan\n";}catch(const exception& e){logError(e.what());cerr<<e.what()<<'\n';}}