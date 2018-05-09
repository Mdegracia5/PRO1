#include <iostream>
using namespace std;

int main () {
    int h, m;
    while (cin >> h >> m) {
        if (h >= 12) h -= 12;
        if (h==0 and m==0) cout << "0 12" << endl;
        else if (h==0) {
            if (m<=15) cout << 105-m << " 7" << endl;
            else if (m<=30) cout << 120-m << " 8" << endl;
            else if (m<=45) cout << 120-m << " 7" << endl;
            else cout << 120-m << " 6" << endl;
        } 
        else if (h==1 and m==0) cout << "60 6" << endl;            
        else {
            if (m==0) cout << "0 " << h << endl;
            else {
                int c = 0;
                if (m <= 15) ++c;
                if (m <= 30) ++c;
                if (m <= 45) ++c;
                c += h+1;
                cout << 60-m << " " << c << endl;
            }
        }
    }
}
