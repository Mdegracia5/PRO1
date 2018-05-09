#include <iostream>
using namespace std;

/*
    00       15    30    45
---------------------------
00  4+12  +  1  +  2  +  3  = 22
01  4+1   +  1  +  2  +  3  = 11
02  4+2   +  1  +  2  +  3  = 12
03  4+3   +  1  +  2  +  3  = 13
04  4+4   +  1  +  2  +  3  = 14
05  4+5   +  1  +  2  +  3  = 15
06  4+6   +  1  +  2  +  3  = 16
07  4+7   +  1  +  2  +  3  = 17
08  4+8   +  1  +  2  +  3  = 18
09  4+9   +  1  +  2  +  3  = 19
10  4+10  +  1  +  2  +  3  = 20
11  4+11  +  1  +  2  +  3  = 21
12  4+100 +  1  +  2  +  3  = 110
13  4+1   +  1  +  2  +  3  = 11
...
23  4+11  +  1  +  2  +  3  = 21
                              ---
                              484
*/

int campanades(int h, int m, int l) {
    int dies = (l/60)/24;
    int n = dies*484;
    l %= 60*24;
    while (l != 0) {
        if (m == 0) {
            if (h == 0) n += 16;
            else if (h == 12) n += 104;
            else if (h < 12) n += 4+h;
            else  n += 4+(h-12);
        }
        else if (m == 15) n += 1;
        else if (m == 30) n += 2;
        else if (m == 45) n += 3;
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
