#include <iostream>
using namespace std;

int main () {
    cout.setf(ios::fixed);
    cout.precision(2);
    int n;
    cin >> n;
    double sumatori, sumatori2;
    sumatori = sumatori2 = 0.0;
    double x;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        sumatori += x*x;
        sumatori2 += x;
    }
    cout << sumatori/(n-1) - (sumatori2*sumatori2)/(n*(n-1)) << endl;
}
