#include <iostream>
using namespace std;
double rata(const int *a,int n){ long long t=0; for(int i=0;i<n;++i)t+=a[i]; return n?static_cast<double>(t)/n:0.0; }
int main(){ int n; cin>>n; if(n<=0||n>100)return 1; int *a=new int[n]; for(int i=0;i<n;++i)cin>>a[i]; cout<<"rata="<<rata(a,n)<<'\n'; cout<<"via pointer: "; for(int *p=a;p<a+n;++p)cout<<*p<<' '; cout<<'\n'; delete[] a; a=nullptr; }