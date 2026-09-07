#include <iostream>
#include <string>
using namespace std;
struct Barang{int id; string nama; int jumlah;};
int main(){Barang d[3]={{1,"Kabel",4},{2,"Mouse",3},{3,"Adaptor",2}}; int total=0; for(const auto& b:d){cout<<b.id<<" "<<b.nama<<" "<<b.jumlah<<"\
"; total+=b.jumlah;} cout<<"Total="<<total<<"\
";}
