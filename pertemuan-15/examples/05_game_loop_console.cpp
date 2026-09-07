#include <iostream>
using namespace std;
int main(){int x=0,v=2;for(int frame=0;frame<6;++frame){if(frame==3)v=-1;x+=v;cout<<"frame="<<frame<<" x="<<x<<'\n';}}