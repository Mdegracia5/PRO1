#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    double x, c, res = 0.0;
    cin >> x;
    int i = 0;
    while (cin >> c) {
        res += c*pow(x,i);
        ++i;
    }
    cout << res << endl;
}
