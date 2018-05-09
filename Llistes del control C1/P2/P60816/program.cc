#include <iostream>
using namespace std;

int main () {
    int n, resto;
    cin >> n;
    int m = n;
    while (n > 9) {
        resto = n%16;
        if (resto == 10) cout << 'A';
        else if (resto == 11) cout << 'B';
        else if (resto == 12) cout << 'C';
        else if (resto == 13) cout << 'D';
        else if (resto == 14) cout << 'E';
        else if (resto == 15) cout << 'F';
        else cout << resto;
        n = n/16;
    }
    if (9 < m and m < 16) cout << endl;
    else cout << n << endl;
}
