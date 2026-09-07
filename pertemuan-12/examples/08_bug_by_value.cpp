#include <iostream>
using namespace std;
struct Skor{int nilai;};
void tambah(Skor s){s.nilai+=10;} // BUG LOGIKA: seharusnya reference
int main(){Skor s{70}; tambah(s); cout<<s.nilai<<"\
";}
