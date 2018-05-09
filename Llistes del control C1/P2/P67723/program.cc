#include <iostream>
using namespace std;

int main () {
    int a,b,a1,b1,r;
    cin >> a >> b;
    a1 = a;
    b1 = b;
    while (b > 0) {
        r = a%b;
        a = b;
        b = r;
    }
    cout << "El mcd de " << a1 << " i " << b1 << " es " << a << '.' << endl;
}
