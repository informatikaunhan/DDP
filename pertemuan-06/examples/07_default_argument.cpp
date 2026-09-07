#include <iostream>
using namespace std;
double diskon(double harga,double persen=5.0){ return harga*persen/100.0; }
int main(){ cout << diskon(200000) << "\n" << diskon(200000,10.0) << "\n"; }
