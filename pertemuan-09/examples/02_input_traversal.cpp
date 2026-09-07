#include <iostream>
using namespace std;
int main() {
    const int N = 5;
    int data[N]{};
    for (int i = 0; i < N; ++i) {
        cout << "data[" << i << "]: ";
        cin >> data[i];
    }
    cout << "Isi: ";
    for (int i = 0; i < N; ++i) cout << data[i] << ' ';
    cout << '\n';
}
