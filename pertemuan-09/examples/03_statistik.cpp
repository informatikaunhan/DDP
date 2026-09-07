#include <iostream>
using namespace std;
int main() {
    int a[] = {70, 80, 90, 60, 85, 75};
    const int N = 6;
    int total = 0, minimum = a[0], maksimum = a[0];
    for (int i = 0; i < N; ++i) {
        total += a[i];
        if (a[i] < minimum) minimum = a[i];
        if (a[i] > maksimum) maksimum = a[i];
    }
    double rata = static_cast<double>(total) / N;
    cout << "Total=" << total << " Rata=" << rata
         << " Min=" << minimum << " Max=" << maksimum << '\n';
}
