#include <fstream>
#include <iostream>
using namespace std;
int main(){ofstream log("app.log",ios::app);if(!log){cerr<<"log gagal\n";return 1;}log<<"INFO | program dijalankan\n";cout<<"baris log ditambahkan\n";}