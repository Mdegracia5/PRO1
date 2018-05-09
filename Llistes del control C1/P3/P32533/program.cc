#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    m = n;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n-1; ++j) cout << "+";
        cout << "/";
        for (int k = m; k > n; --k) cout << "*";
        cout << endl;
        --n;
    }
}
