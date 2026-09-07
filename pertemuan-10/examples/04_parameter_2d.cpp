#include <iostream>
using namespace std;
constexpr int C=3;
void tampil(const int a[][C], int rows){
    for(int r=0;r<rows;++r){
        for(int c=0;c<C;++c) cout<<a[r][c]<<' ';
        cout<<'\n';
    }
}
int main(){ int a[][C]={{1,2,3},{4,5,6}}; tampil(a,2); }
