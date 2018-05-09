#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    if ('a' <= c and c <= 'z') cout << char(c - 32) << endl;
    else if ('A' <= c and c <= 'Z') cout << char(c + 32) << endl;
}
