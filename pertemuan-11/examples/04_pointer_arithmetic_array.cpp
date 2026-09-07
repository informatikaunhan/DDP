#include <iostream>
using namespace std;
int main(){ int a[5]={10,20,30,40,50}; for(int *p=a;p<a+5;++p) cout<<*p<<' '; cout<<'\n'; }