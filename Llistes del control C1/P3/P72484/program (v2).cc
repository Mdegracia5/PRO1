#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = 1, e = n-1;
    for (int lin = 1; lin <= n; lin = lin + 1) {
        for (int esp = 1; esp <= e; esp = esp + 1) cout << ' ';
        for (int ast = 1; ast <= a; ast = ast + 1) cout << '*';
        a = a + 2;
        e = e - 1;
        cout << endl;
    }
    a = a - 4;
    e = e + 2;
    for (int lin = 1; lin <= n-1; lin = lin + 1) {
        for (int esp = 1; esp <= e; esp = esp + 1) cout << ' ';
        for (int ast = 1; ast <= a; ast = ast + 1) cout << '*';
        a = a - 2;
        e = e + 1;
        cout << endl;     
    }
}
