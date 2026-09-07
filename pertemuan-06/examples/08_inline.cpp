#include <iostream>
using namespace std;
inline int duaKali(int x){ return 2*x; }
int main(){ for(int i=1;i<=5;++i) cout << duaKali(i) << (i==5?'\n':' '); }
