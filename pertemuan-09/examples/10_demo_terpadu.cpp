#include <iostream>
using namespace std;
int cari(const int a[], int n, int target){ for(int i=0;i<n;++i) if(a[i]==target) return i; return -1; }
void bubbleSort(int a[], int n){ for(int p=0;p<n-1;++p) for(int i=0;i<n-1-p;++i) if(a[i]>a[i+1]){int t=a[i];a[i]=a[i+1];a[i+1]=t;} }
double rata(const int a[], int n){ int s=0; for(int i=0;i<n;++i)s+=a[i]; return static_cast<double>(s)/n; }
int main(){
    int nilai[]={72,88,95,81,76,90}; const int N=6;
    cout << "Rata: " << rata(nilai,N) << '\n';
    cout << "Indeks 90: " << cari(nilai,N,90) << '\n';
    bubbleSort(nilai,N);
    cout << "Terurut: "; for(int x:nilai) cout<<x<<' '; cout<<'\n';
}
