#include <iostream>
#include <string>
using namespace std;
class Base{public:Base(){cout<<"Base ctor\n";}~Base(){cout<<"Base dtor\n";}};
class Derived:public Base{public:Derived(){cout<<"Derived ctor\n";}~Derived(){cout<<"Derived dtor\n";}};
int main(){Derived d;}
