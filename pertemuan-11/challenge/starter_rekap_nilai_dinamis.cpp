#include <iostream>
using namespace std;
void input(int *a,int n){ /* TODO validasi 0..100 */ }
void tampil(const int *a,int n){ /* TODO */ }
double rata(const int *a,int n){ return 0.0; }
int maksimum(const int *a,int n){ return 0; }
int minimum(const int *a,int n){ return 0; }
int main(){
    int n; cin>>n;
    if(n<1 || n>100){ cout<<"N tidak valid\n"; return 1; }
    int *data = new int[n];
    // TODO input, tampil, statistik, satu traversal pointer arithmetic
    delete[] data;
    data=nullptr;
}
