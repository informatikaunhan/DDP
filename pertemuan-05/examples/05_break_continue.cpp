#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 20; ++i) {
        if (i == 13) break;
        if (i % 3 == 0) continue;
        cout << i << " ";
    }
    cout << "\n";
    return 0;
}
