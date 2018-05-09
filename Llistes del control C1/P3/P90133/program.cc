#include <iostream>
using namespace std;

int main() {
    int b, n, log;
    while (cin >> b >> n) {
        log = 0;
        while (n >= b) {
            n = n/b;
            log = log + 1;                
	    }
        cout << log << endl;
    }        
}
