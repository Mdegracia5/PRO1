#include <iostream>
using namespace std;

int main () {
    char a;
    cin >> a;
    if (('a' <= a) and (a <= 'z')) cout << "minuscula" << endl;
    else cout << "majuscula" << endl;
    if ((a == 'a') or (a == 'e') or (a == 'i') or (a == 'o') or (a == 'u') or  (a == 'A') or (a == 'E') or (a == 'I') or (a == 'O') or (a == 'U')) cout << "vocal" << endl;
    else cout << "consonant" << endl;
}
