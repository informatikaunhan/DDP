#include <iostream>
using namespace std;
int main(){
    const int R=3,C=4;
    int a[R][C]{};
    for(int r=0;r<R;++r)
        for(int c=0;c<C;++c){
            cout<<"a["<<r<<"]["<<c<<"]: ";
            cin>>a[r][c];
        }
    for(int r=0;r<R;++r){
        for(int c=0;c<C;++c) cout<<a[r][c]<<'\t';
        cout<<'\n';
    }
}
