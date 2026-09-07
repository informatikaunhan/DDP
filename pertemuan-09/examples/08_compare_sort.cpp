#include <iostream>
using namespace std;
void tampil(const int a[], int n){ for(int i=0;i<n;++i) cout<<a[i]<<' '; cout<<'\n'; }
void bubble(int a[],int n){ for(int p=0;p<n-1;++p) for(int i=0;i<n-1-p;++i) if(a[i]>a[i+1]){int t=a[i];a[i]=a[i+1];a[i+1]=t;} }
void selection(int a[],int n){ for(int p=0;p<n-1;++p){int m=p;for(int i=p+1;i<n;++i)if(a[i]<a[m])m=i;int t=a[p];a[p]=a[m];a[m]=t;} }
int main(){ int a[]={9,1,7,3,5}; int b[]={9,1,7,3,5}; bubble(a,5); selection(b,5); tampil(a,5); tampil(b,5); }
