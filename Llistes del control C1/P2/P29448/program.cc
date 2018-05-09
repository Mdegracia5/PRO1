#include <iostream>
using namespace std;

bool es_de_traspas(int a) {
	return ((a%100 != 0 and a%4 == 0) or (a%100 == 0 and (a/100)%4 == 0));
}

int main () {
    int d, m, a;
    while (cin >> d >> m >> a) {
        if (d < 1 or d > 31 or m < 1 or m > 12 or a < 1800 or a > 9999) cout << "Data Incorrecta" << endl;
        else if ((m ==4 or m == 6 or m == 9 or m == 11) and d == 31) cout << "Data Incorrecta" << endl;
        else if (m == 2) {
            if (d > 29) cout << "Data Incorrecta" << endl;
            else {
                if (es_de_traspas(a)) cout << "Data Correcta" << endl;
                else {
                    if (d == 29) cout << "Data Incorrecta" << endl;
                    else cout << "Data Correcta" << endl;
                }
            }
        }
        else cout << "Data Correcta" << endl;
    }
}
