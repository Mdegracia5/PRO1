#include <iostream>
using namespace std;

int main () {
    int a1,b1,a2,b2,a,b;
    cin >> a1 >> b1 >> a2 >> b2;
    a = max(a1,a2); // if (a1 > a2) a = a1; else a = a2;
    b = min(b1,b2); // if (b1 < b2) b = b1; else b = b2;
    if (a <= b) cout << '[' << a << ',' << b << ']' << endl;
    else cout << "[]" << endl;
}
