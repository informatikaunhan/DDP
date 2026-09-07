#include <iostream>
using namespace std;
int main(){
    const int R=2,K=3,C=2;
    int A[R][K]={{1,2,3},{4,5,6}};
    int B[K][C]={{7,8},{9,10},{11,12}};
    int H[R][C]{};
    for(int r=0;r<R;++r)
        for(int c=0;c<C;++c){
            H[r][c]=0;
            for(int k=0;k<K;++k) H[r][c]+=A[r][k]*B[k][c];
        }
    for(int r=0;r<R;++r){ for(int c=0;c<C;++c) cout<<H[r][c]<<' '; cout<<'\n'; }
}
