#include <iostream>
using namespace std;

bool lulus(double nilai) {
    return nilai > 75; // BUG: batas 75 seharusnya termasuk lulus
}

int main() {
    for (double x : {74.99, 75.0, 75.01})
        cout << x << " -> " << boolalpha << lulus(x) << '\n';
}
