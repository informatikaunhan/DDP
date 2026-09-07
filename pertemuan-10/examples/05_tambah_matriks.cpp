#include <iostream>
using namespace std;
int main(){
    const int R=2,C=3;
    int A[R][C]={{1,2,3},{4,5,6}};
    int B[R][C]={{6,5,4},{3,2,1}};
    int H[R][C]{};
    for(int r=0;r<R;++r)
        for(int c=0;c<C;++c) H[r][c]=A[r][c]+B[r][c];
    for(int r=0;r<R;++r){ for(int c=0;c<C;++c) cout<<H[r][c]<<' '; cout<<'\n'; }
}
