#include <iostream>
using namespace std;
int main(){ int n; cin>>n; if(n<=0)return 1; int *a=new int[n]; long long total=0; for(int i=0;i<n;++i){cin>>a[i]; total+=a[i];} cout<<total<<'\n'; delete[] a; a=nullptr; }