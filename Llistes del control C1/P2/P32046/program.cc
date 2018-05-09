#include <iostream>
using namespace std;

int main () {
    int a, b, total = 0;
    cin >> a;
    cout << "nombres que acaben igual que " << a << ':' << endl;
    a = a%1000;
    while (cin >> b) {
        if (a == b%1000) {
            ++total;
            cout << b << endl;
        }
    }
    cout << "total: " << total << endl;
}
