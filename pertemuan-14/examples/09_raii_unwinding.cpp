#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;
struct Tracer{string n;Tracer(string x):n(x){cout<<"ctor "<<n<<'\n';}~Tracer(){cout<<"dtor "<<n<<'\n';}};
void f(){Tracer t("lokal");ofstream out("raii.txt");if(!out)throw runtime_error("open gagal");out<<"sebelum error\n";throw runtime_error("simulasi");}
int main(){try{f();}catch(const exception& e){cerr<<"catch: "<<e.what()<<'\n';}}