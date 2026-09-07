#include <iostream>
using namespace std;
int main(){
    const int R=2,C=3;
    int A[R][C]={{1,2,3},{4,5,6}};
    int T[C][R]{};
    for(int r=0;r<R;++r) for(int c=0;c<C;++c) T[c][r]=A[r][c];
    for(int r=0;r<C;++r){ for(int c=0;c<R;++c) cout<<T[r][c]<<' '; cout<<'\n'; }
}
