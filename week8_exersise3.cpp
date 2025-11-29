#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number of items: ";
    cin >> number;

    string name, lowestName, secondLowestName;
    double price, lowestPrice, secondLowestPrice = 1e9;

    cout << "Enter item's name: ";
    cin >> name;

    cout << "Enter item's price: ";
    cin >> price;

    lowestName = name;
    lowestPrice = price;

    for (int i = 2; i <= number; i++)
    {
        cout << "Enter item's name: ";
        cin >> name;

        cout << "Enter item's price: ";
        cin >> price;

        if (price < lowestPrice) {
            secondLowestPrice = lowestPrice;
            secondLowestName = lowestName;

            lowestPrice = price;
            lowestName = name;
        }
        else if (price < secondLowestPrice) {
            secondLowestPrice = price;
            secondLowestName = name;
        }
    }

    cout << "\nLowest Price Item:\n";
    cout << "Name: " << lowestName << endl;
    cout << "Price: " << lowestPrice << endl;

    cout << "\nSecond Lowest Price Item:\n";
    cout << "Name: " << secondLowestName << endl;
    cout << "Price: " << secondLowestPrice << endl;

    return 0;
}
