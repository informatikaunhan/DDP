#include <cassert>
#include <iostream>
int divideSafe(int a,int b){assert(b!=0);return a/b;}
int main(){std::cout<<divideSafe(10,2)<<'\n';}