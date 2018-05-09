#include <iostream>
using namespace std;

int main() {
    int a, d, h, m , s;
    cin >> a >> d >> h >> m >> s;
    d += a*365;
    h += d*24;
    m += h*60;
    cout << m*60 + s << endl;
}
