#include <iostream>
using namespace std;
constexpr int C=3;
void tampil(const int a[][C],int R){ for(int r=0;r<R;++r){ for(int c=0;c<C;++c) cout<<a[r][c]<<' '; cout<<'\n'; } }
int totalBaris(const int a[][C],int row){ int s=0; for(int c=0;c<C;++c) s+=a[row][c]; return s; }
int main(){
    int a[][C]={{2,4,6},{1,3,5},{7,8,9}};
    const int R=3;
    tampil(a,R);
    for(int r=0;r<R;++r) cout<<"Total baris "<<r<<" = "<<totalBaris(a,r)<<'\n';
}
