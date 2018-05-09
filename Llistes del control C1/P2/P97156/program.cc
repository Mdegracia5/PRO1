#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a == b) cout << a << endl;
    else if (a > b) cout << endl;
    else { for (int i = a; i < b; ++i) cout << i << ','; cout << b << endl; }
}
