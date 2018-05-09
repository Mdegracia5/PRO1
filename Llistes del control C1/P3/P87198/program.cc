#include <iostream>
using namespace std;

/*
Files inicials
---------------
n = 2 -> 1e, 2x;
n = 3 -> 2e, 3x; 1e, 5x;
n = 4 -> 3e, 4x; 2e, 6x; 1e, 8x;
...
n-1 files inicials/iteracions amb i espais seguits de 2*(n-i-1)+n ics en cadascuna

Files centrals
--------------
n = 2 -> 4x;  4  = 2*2 + 0;
n = 3 -> 7x;  7  = 3*2 + 1;
n = 4 -> 10x; 10 = 4*2 + 2;
...
n files centrals amb x  = n*2 + (n-2) = 3*n-2
*/

int main() {
    int n;
    while (cin >> n) {
        for (int i = n-1; i > 0; --i) {
            for (int e = 0; e < i; ++e) cout << ' ';
            for (int x = 0; x < 2*(n-i-1)+n; ++x) cout << 'X';
            cout << endl;
        }
        for (int i = 0; i < n; ++i) {
            for (int x = 0; x < 3*n-2; ++x) cout << 'X';
            cout << endl;
        }
        for (int i = 1; i <= n-1; ++i) {
            for (int e = 0; e < i; ++e) cout << ' '; 
            for (int x = 0; x < 2*(n-i-1)+n; ++x) cout << 'X';
            cout << endl;
        }
        cout << endl;
    }
}
