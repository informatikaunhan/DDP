#include <iostream>
using namespace std;
void bubbleSort(int a[], int n) {
    for (int pass = 0; pass < n - 1; ++pass) {
        bool berubah = false;
        for (int i = 0; i < n - 1 - pass; ++i) {
            if (a[i] > a[i+1]) {
                int t=a[i]; a[i]=a[i+1]; a[i+1]=t;
                berubah = true;
            }
        }
        if (!berubah) break;
    }
}
int main(){ int a[]={5,2,4,1}; bubbleSort(a,4); for(int x:a) cout<<x<<' '; cout<<'\n'; }
