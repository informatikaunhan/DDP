#include <algorithm>
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
using namespace std;
struct Record{string nama;int nilai;};
vector<Record> load(const string& p){ifstream in(p);if(!in)throw runtime_error("open gagal");vector<Record>d;Record r;while(in>>r.nama>>r.nilai)d.push_back(r);if(in.bad())throw runtime_error("I/O error");return d;}
int main(){ofstream seed("review.txt");seed<<"Alya 88\nBima 75\nCitra 93\n";seed.close();try{auto d=load("review.txt");sort(d.begin(),d.end(),[](const auto&a,const auto&b){return a.nilai>b.nilai;});for(const auto&r:d)cout<<r.nama<<' '<<r.nilai<<'\n';}catch(const exception&e){cerr<<e.what()<<'\n';}}