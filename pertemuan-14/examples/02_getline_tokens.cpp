#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main(){ofstream o("nilai.txt");o<<"Alya 88\nBima 75\n";o.close();ifstream in("nilai.txt");string n;int v,total=0,c=0;while(in>>n>>v){cout<<n<<" -> "<<v<<'\n';total+=v;c++;}if(c)cout<<"rata="<<static_cast<double>(total)/c<<'\n';}