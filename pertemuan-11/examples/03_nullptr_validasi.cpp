#include <iostream>
using namespace std;
void cetak(const int *p){ if(p) cout<<*p<<"\n"; else cout<<"null\n"; }
int main(){ int x=10; cetak(nullptr); cetak(&x); }