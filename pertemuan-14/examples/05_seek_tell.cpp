#include <fstream>
#include <iostream>
using namespace std;
int main(){ofstream o("bytes.dat",ios::binary);o<<"ABCDEFGH";o.close();ifstream in("bytes.dat",ios::binary);in.seekg(0,ios::end);auto n=in.tellg();cout<<"size="<<n<<'\n';in.seekg(3,ios::beg);char c='?';in.get(c);cout<<"offset3="<<c<<" next="<<in.tellg()<<'\n';}