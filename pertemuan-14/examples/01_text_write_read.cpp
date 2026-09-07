#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main(){ofstream out("catatan.txt");if(!out){cerr<<"open gagal\n";return 1;}out<<"DDP101\nFile Handling\n";out.close();ifstream in("catatan.txt");string s;while(getline(in,s))cout<<s<<'\n';}