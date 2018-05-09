#include <iostream>
using namespace std;

/*
Files inicials
---------------
n = 4 -> 3e, 1*; 2e, 3*; 1e, 5*;
n = 7 -> 6e, 1*; 5e, 3*; 4e, 5*; 3e, 7*; 2e, 9*; 1e, 11*;
...
n-1 files inicials/iteracions amb i espais seguits de 2*(n-i)-1 asteriscs en cadascuna

Fila central
------------
n = 4 -> 7*;
n = 7 -> 13*;
...
1 fila central amb 2*n-1 asteriscs
*/

int main() {
    int n;
    cin >> n;
    for (int i = n-1; i > 0; --i) {
        for (int e = 0; e < i; ++e) cout << ' ';
        for (int a = 0; a < 2*(n-i)-1; ++a) cout << '*';
        cout << endl;
    }
    for (int i = 0; i < 2*n-1; ++i) cout << '*';
    cout << endl;
    for (int i = 1; i <= n-1; ++i) {
        for (int e = 0; e < i; ++e) cout << ' ';
        for (int a = 0; a < 2*(n-i)-1; ++a) cout << '*';
        cout << endl;        
    }
}
