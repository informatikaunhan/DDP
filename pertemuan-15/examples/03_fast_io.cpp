#include <iostream>
#include <vector>
using namespace std;
int main(){ios::sync_with_stdio(false);cin.tie(nullptr);int n;if(!(cin>>n))return 0;long long s=0;for(int i=0,x;i<n;++i){cin>>x;s+=x;}cout<<s<<'\n';}