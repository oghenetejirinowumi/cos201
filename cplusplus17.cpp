#include <iostream>
#include <iomanip> // for the setw() function
using namespace std;

int main()
{
	cout << "Multiplication Table\n";
	cout << "---------------------------------\n";
	
	cout << " | ";
	for (int j = 1; j <= 9; j++)
		cout << setw(3) << j;
		
	cout << "\n";
	
	// Display table body
	for (int i = 1; i <= 9; i++)
	{
		cout << i << " | ";
		// Display the product and align properly
		for (int j =1; j <= 9; j++)
		{
			cout << setw(3) << i * j;
		}
		cout << "\n";
	}
}