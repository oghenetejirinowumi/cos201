#include <iostream>
#include <string>
using namespace std;

int main()
{
	int number;
	cout << "Enter the number of items: ";
	cin >> number;
	
	string name, lowestName;
	double price, lowestPrice;
	
	// First input (to initialize the lowest values)
	cout << "Enter item's name: ";
	cin >> name;
	
	cout << "Enter item's price: ";
	cin >> price;
	
	lowestName = name;
	lowestPrice = price;
	
	// Loop through remaining items
	for (int i = 2; i <= number; i++)
	{
		cout << "Enter item's name: ";
		cin >> name;
		
		cout << "Enter item's price: ";
		cin >> price;
		
		if (price < lowestPrice)
		{
			lowestPrice = price;
			lowestName = name;
		}
	}
	cout << "\nThe item with the lowest price is:\n";
	cout << "Name: " << lowestName << endl;
	cout << "Price: " << lowestPrice << endl;
	
	return 0;
}