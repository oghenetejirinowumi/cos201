#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter your first integer: ";
    cin >> a;

    cout << "Enter your second integer: ";
    cin >> b;

    // Swapping using a temporary variable
    c = a;
    a = b;
    b = c;

    cout << "After swapping:" << endl;
    cout << "First Integer: " << a << endl;
    cout << "Second Integer: " << b << endl;

    return 0;
}
