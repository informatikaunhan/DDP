#include <iostream>
using namespace std;
void tambahLima(int x){ x += 5; cout << "Dalam fungsi: " << x << "\n"; }
int main(){ int n=10; cout << "Sebelum: " << n << "\n"; tambahLima(n); cout << "Sesudah: " << n << "\n"; }
