#include <iostream>
#include <string>
using namespace std;
class Tracer{string nama;public:Tracer(const string& n):nama(n){cout<<"ctor "<<nama<<"\n";}~Tracer(){cout<<"dtor "<<nama<<"\n";}};
int main(){Tracer a("A");{Tracer b("B");}Tracer c("C");}
