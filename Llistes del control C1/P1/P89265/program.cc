#include <iostream>
using namespace std;

int main () {
    int a,b,c,d,max,min;
    cin >> a >> b >> c >> d;
    if (a > c) max = a;
    else max = c;
    if (b < d) min = b;
    else min = d;
    if (a == c and b == d) cout << '=' << " , ";
    else if ((a >= c) and (b <= d)) cout << '1' << " , ";
    else if ((c >= a) and (d <= b)) cout << '2' << " , ";
    else cout << '?' << " , ";
    if (max <= min) cout << '[' << max << ',' << min << ']' << endl;
    else cout << "[]" << endl;
}
