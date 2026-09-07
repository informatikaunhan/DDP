#include <iostream>
#include <stdexcept>
using namespace std;
double bagi(double a,double b){if(b==0.0)throw invalid_argument("pembagi nol");return a/b;}
int main(){try{cout<<bagi(10,0)<<'\n';}catch(const invalid_argument& e){cerr<<"Validasi: "<<e.what()<<'\n';}}