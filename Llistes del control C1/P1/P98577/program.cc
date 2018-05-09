#include <iostream>
using namespace std;

int campanades(int h, int m, int l) {
    int dies = (l/60)/24;
    // int n = dies*24;
    int n = dies*22;
    l %= 60*24;
    while (l != 0) {
        // if ( (h%12 == 0 and m == 0) or (h%12 == 1 and m == 5) or (h%12 == 2 and m == 10) or (h%12 == 3 and m == 15) or (h%12 == 4 and m == 20) or (h%12 == 5 and m == 25) or (h%12 == 6 and m == 30) or (h%12 == 7 and m == 35) or (h%12 == 8 and m == 40) or (h%12 == 9 and m == 45) or (h%12 == 10 and m == 50) or (h%12 == 11 and m == 55) ) ++n;
        if ( (h%12 == 0 and m == 0) or (h%12 == 1 and m == 5) or (h%12 == 2 and m == 10) or (h%12 == 3 and m == 16) or (h%12 == 4 and m == 21) or (h%12 == 5 and m == 27) or (h%12 == 6 and m == 32) or (h%12 == 7 and m == 38) or (h%12 == 8 and m == 43) or (h%12 == 9 and m == 49) or (h%12 == 10 and m == 54) ) ++n;
        --l;
        ++m;
        if (m == 60) {
            m = 0;
            ++h;
            if (h == 24) h = 0;
        }
    }
    return n;
}

int main() {
    int h, m, l;   
    while (cin >> h >> m >> l) {
        cout << campanades(h,m,l) << endl;
    }
}
