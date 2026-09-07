#include <iostream>
using namespace std;

long long faktorialBug(int n) {
    if (n == 0) return 0; // BUG: 0! seharusnya 1
    return n * faktorialBug(n - 1);
}

int main() {
    cout << "4! = " << faktorialBug(4) << '\n';
}
