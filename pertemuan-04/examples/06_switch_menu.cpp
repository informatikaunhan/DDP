#include <iostream>
using namespace std;
int main(){int m; double a,b; cin>>m>>a>>b; switch(m){case 1:cout<<a+b<<'\n';break;case 2:cout<<a-b<<'\n';break;case 3:cout<<a*b<<'\n';break;case 4:if(b!=0)cout<<a/b<<'\n';else cout<<"PEMBAGI NOL\n";break;default:cout<<"MENU INVALID\n";} }
