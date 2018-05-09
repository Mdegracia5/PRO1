#include <iostream>
using namespace std;

int main () {
    int k;
    cin >> k;
    for (int x = 2; x <= 16; ++x) {
        cout << "Base " << x << ": ";
        int y, z;
        y = 1;
        z = k;
        while (z >= x) {
            y += 1;
            z /= x;
        }
        cout << y << " cifras." << endl;
    }
}
