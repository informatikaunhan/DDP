#include <iostream>
using namespace std;
void selectionSort(int a[], int n) {
    for (int pos=0; pos<n-1; ++pos) {
        int idxMin=pos;
        for (int i=pos+1; i<n; ++i)
            if (a[i] < a[idxMin]) idxMin=i;
        int t=a[pos]; a[pos]=a[idxMin]; a[idxMin]=t;
    }
}
int main(){ int a[]={5,2,4,1}; selectionSort(a,4); for(int x:a) cout<<x<<' '; cout<<'\n'; }
