#include <iostream>
using namespace std;
int main(){
    const int N=3;
    char papan[N][N]={{'X',' ','O'},{' ','X',' '},{'O',' ','X'}};
    int kosong=0;
    for(int r=0;r<N;++r){
        for(int c=0;c<N;++c){ cout<<'['<<papan[r][c]<<']'; if(papan[r][c]==' ') ++kosong; }
        cout<<'\n';
    }
    cout<<"Sel kosong: "<<kosong<<'\n';
}
