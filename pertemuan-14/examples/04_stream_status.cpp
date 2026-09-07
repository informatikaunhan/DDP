#include <fstream>
#include <iostream>
using namespace std;
int main(){ifstream in("angka.txt");if(!in){cerr<<"file tidak ada\n";return 1;}int x;while(in>>x)cout<<x<<'\n';if(in.bad())cerr<<"I/O error serius\n";else if(in.fail()&&!in.eof())cerr<<"format rusak\n";else cout<<"akhir file normal\n";}