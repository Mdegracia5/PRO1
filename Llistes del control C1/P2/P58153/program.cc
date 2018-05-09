#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(10);
    int n, m;
    while (cin >> n >> m) {
        if (n == m) cout << double(0) << endl;
        else {
            double resta = 0.0;
            for (double i = m+1; i <= n; ++i) resta += 1/i;
            cout << resta << endl;
            /* para bailar esto es una bomba, para gozar esto es una bomba ♫
            double hn = 0.0;
            for (double i = 1; i <= n; ++i) hn += 1/i;
		    if (m == 0) cout << hn << endl;
		    else {
                double hm = 0.0;
		        for (double i = 1; i <= m; ++i) hm += 1/i;
		        cout << hn - hm << endl;
		    }
            */  
        }
    }
}
