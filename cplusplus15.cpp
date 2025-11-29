#include <iostream>
using namespace std;

int main()
{
    int sum = 0, i = 1;

    while (i < 10)
    {
        sum = sum + i;
        i++;
    }

    cout << "sum is " << sum; // sum is 45

    return 0;
}
