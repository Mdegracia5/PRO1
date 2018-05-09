#include <iostream>
using namespace std;

int main() {
    int a, n;
    while (cin >> a >> n) {
        int p = 1;
        for (int i = 0; i < n; ++i) p = p*a;
        cout << p << endl;
    }
}
