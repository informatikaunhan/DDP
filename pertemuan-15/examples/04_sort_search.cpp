#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(){vector<int>a{9,2,7,4,2};sort(a.begin(),a.end());for(int x:a)cout<<x<<' ';cout<<'\n';cout<<(binary_search(a.begin(),a.end(),7)?"YES":"NO")<<'\n';}