#include <iostream>
using namespace std;
int maksimum(int a,int b){ return a>b?a:b; }
double maksimum(double a,double b){ return a>b?a:b; }
int main(){ cout << maksimum(3,8) << "\n" << maksimum(3.5,8.2) << "\n"; }
