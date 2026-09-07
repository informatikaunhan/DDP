#include <iostream>
using namespace std;
int total(const int a[], int n) {
    int s = 0;
    for (int i = 0; i < n; ++i) s += a[i];
    return s;
}
void tambah(int a[], int n, int delta) {
    for (int i = 0; i < n; ++i) a[i] += delta;
}
int main() {
    int a[] = {1,2,3,4};
    const int N = 4;
    cout << total(a,N) << '\n';
    tambah(a,N,10);
    for (int x : a) cout << x << ' ';
    cout << '\n';
}
