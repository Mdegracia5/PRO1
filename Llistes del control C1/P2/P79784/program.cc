#include <iostream>
using namespace std;

/*
      N
    (y-1)
           ↑
  O  ← →   E
(x-1) ↓  (x+1)
      S
    (y+1)
*/

int main() {
    char c;
    int x = 0, y = 0;
    while (cin >> c) {
        if (c == 'n') --y;
        else if (c == 's') ++y;
        else if (c == 'e') ++x;
        else if (c == 'o') --x;
    }
    cout << "(" << x << ", " << y << ")" << endl;
}
