#include <iostream>
using namespace std;
class Nilai{int skor=0;public:bool setSkor(int x){if(x<0||x>100)return false;skor=x;return true;}int getSkor()const{return skor;}};
int main(){Nilai n;cout<<boolalpha<<n.setSkor(85)<<" "<<n.getSkor()<<"\n";cout<<n.setSkor(120)<<" "<<n.getSkor()<<"\n";}
