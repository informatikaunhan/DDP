#include <iostream>
using namespace std;
int main(){ int skor=70; int *p=&skor; *p=95; cout<<"skor="<<skor<<"\n"; }