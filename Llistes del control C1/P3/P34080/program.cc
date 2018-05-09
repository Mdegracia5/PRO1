#include <iostream>
using namespace std;

int main() {
    int n, m;
    bool primer = true;
    while (cin >> n) {
        m = 0;
        if (primer) primer = false;
        else cout << endl;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << m;
                if (m < 9) ++m;
                else m = 0;
            }
            cout << endl; 
        }
    }
}
