#include <iostream>
using namespace std;
int main(){
    const int R=3,C=4;
    int a[R][C]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    for(int r=0;r<R;++r){
        int s=0; for(int c=0;c<C;++c) s+=a[r][c];
        cout<<"Total baris "<<r<<" = "<<s<<'\n';
    }
    for(int c=0;c<C;++c){
        int s=0; for(int r=0;r<R;++r) s+=a[r][c];
        cout<<"Total kolom "<<c<<" = "<<s<<'\n';
    }
}
