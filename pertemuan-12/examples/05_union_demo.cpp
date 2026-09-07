#include <iostream>
using namespace std;
union Data{int i; double d; char c;};
int main(){cout<<"sizeof(Data)="<<sizeof(Data)<<"\
"; Data x{}; x.i=42; cout<<x.i<<"\
"; x.d=3.5; cout<<x.d<<"\
";}
