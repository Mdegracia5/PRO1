#include <iostream>
using namespace std;

int main() {
    int f, c;
    cin >> f >> c;
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            if (j <= i) cout << (i-j)%10;         
            else cout << (j-i)%10;
        }
        cout << endl;
    }
}
