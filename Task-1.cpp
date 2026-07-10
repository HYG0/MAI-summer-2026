#include <iostream>

using namespace std;
const int num = 67;

int main() {
    cin.tie(0);
    int n = 0, v  = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> v;
        ++v;
        if (v > num || v < -num)
            v = num;
        cout << v << "\n";
    }
}
