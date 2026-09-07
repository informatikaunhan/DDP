#include <iostream>
using namespace std;
void tukar(int& a,int& b){ int t=a; a=b; b=t; }
int main(){ int x=3,y=9; cout << x << " " << y << "\n"; tukar(x,y); cout << x << " " << y << "\n"; }
