#include <iostream>
using namespace std;

int main () {
    int x, y, multiples = 0;
    cin >> x;
    while (cin >> y) {
        if (y%x == 0) ++multiples;
    }
    cout << multiples << endl;
}
