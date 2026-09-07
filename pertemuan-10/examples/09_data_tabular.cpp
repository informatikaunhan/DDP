#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    const int TIM=3,IND=4;
    int skor[TIM][IND]={{80,75,90,85},{88,82,79,91},{76,84,87,80}};
    for(int t=0;t<TIM;++t){
        int s=0; for(int i=0;i<IND;++i) s+=skor[t][i];
        cout<<"Rata tim "<<t<<" = "<<fixed<<setprecision(2)<<static_cast<double>(s)/IND<<'\n';
    }
}
