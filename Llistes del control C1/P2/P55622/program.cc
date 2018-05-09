#include <iostream>
using namespace std;

int main () {
  int n, x, digits = 1;
  cin >> n;
  x = n;
  while (n > 9) {
    ++digits;
    n = n/10;
  }
  cout << "El nombre de digits de " << x << " es " << digits << '.' << endl;
}
