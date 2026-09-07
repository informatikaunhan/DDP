#include <iostream>
#include <string>
using namespace std;
enum class Status{BelumSiap,Siap,SangatSiap};
string label(Status s){switch(s){case Status::BelumSiap:return "Belum siap";case Status::Siap:return "Siap";case Status::SangatSiap:return "Sangat siap";} return "?";}
int main(){Status s=Status::Siap; cout<<label(s)<<"\
";}
