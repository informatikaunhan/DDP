#include <iostream>
using namespace std;
int main(){
    const int R=2,C=3;
    int a[R][C]={{1,2,3},{4,5,6}};
    for(int r=0;r<R;++r){
        for(int c=0;c<C;++c) cout<<a[r][c]<<' ';
        cout<<'\n';
    }
}
