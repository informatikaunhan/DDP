#include <iostream>
#include <string>
std::string newline(){
#ifdef _WIN32
 return "\\r\\n";
#else
 return "\\n";
#endif
}
int main(){std::cout<<"escaped newline representation: "<<newline()<<'\n';}