#include <iostream>
using namespace std;
int main(){ int *p=new int(7); cout<<*p<<'\n'; delete p; p=nullptr; cout<<"cleanup selesai\n"; }