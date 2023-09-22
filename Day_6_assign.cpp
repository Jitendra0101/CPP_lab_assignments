#include <iostream>
using namespace std;

template <class x>
void swapp(x &a, x &b) {
    x temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 3, y = 5;
    double a = 6.25, b = 1.25;
    char c1 = 'A', c2 = 'Z';

    cout << "Before swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "c1 = " << c1 << ", c2 = " << c2 << endl;

    swapp(x, y);

    swapp(a, b);

    swapp(c1, c2);

    cout << "After swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "c1 = " << c1 << ", c2 = " << c2 << endl;

    return 0;
}
