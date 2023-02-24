#include <iostream>
#include "Rectangle.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    Rectangle b, a(17,20);
    cout << "Pair 1:\n" << a << endl;
    a.Area();
    a.Perimeter();
    cout << "Pair 1:\n" << a << endl;
    cin >> b;
    cout << "Pair 2:\n" << b << endl;
    b.Area();
    b.Perimeter();
    cout << "Pair 2:\n" << b << endl;
}
