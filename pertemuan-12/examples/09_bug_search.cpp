#include <iostream>
using namespace std;
struct Item{int id;};
int cari(const Item a[],int n,int id){for(int i=0;i<n-1;++i) if(a[i].id==id) return i; return -1;} // BUG batas
int main(){Item a[3]={{1},{2},{3}}; cout<<cari(a,3,3)<<"\
";}
