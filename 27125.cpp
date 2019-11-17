#include <iostream>
using namespace std;
// 27125 范伯綱 655249

int main() {
    float f, c;
    char q;
    cout << "Enter F or C: ";
    cin >> q;
    cout << "Enter the tempurature now: ";
    if (q == 'f' || q == 'F') {
        cin >> f;
        c = (f - 32) * 5 / 9;
        cout << f << "%F = " << c << "%C";
    } else if (q == 'c' || q == 'C') {
        cin >> c;
        f = c * 9 / 5 + 32;
        cout << c << "%C = " << f << "%F";
    } else {
        cout << "Error";
    }
}
