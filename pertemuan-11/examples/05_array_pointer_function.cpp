#include <iostream>
using namespace std;
int maksimum(const int *a,int n){ int m=a[0]; for(int i=1;i<n;++i) if(a[i]>m)m=a[i]; return m; }
int main(){ int a[]={8,2,19,5}; cout<<maksimum(a,4)<<'\n'; }