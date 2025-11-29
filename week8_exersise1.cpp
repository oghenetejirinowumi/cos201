#include <iostream>
using namespace std;

int main()
{
	int number;
	int positives = 0, negatives = 0, count = 0;
	int sum = 0;
	
	cout << "Enter integers (Enter 0 to stop):";
	
	while(true)
	{
		cin >> number;
		
		if (number == 0)
			break;
			
		if (number > 0)
			positives++;
		else
			negatives++;
			
		sum += number;
		count++;
	}
	
	if (count == 0)
	{
		cout << "No numbers entered except 0." << endl;
	}
	else
	{
		double average = static_cast<double>(sum) / count;

        cout << "\nResults:\n";
        cout << "Number of positive numbers: " << positives << endl;
        cout << "Number of negative numbers: " << negatives << endl;
        cout << "Total sum of numbers: " << sum << endl;
        cout << "Average of numbers: " << average << endl;
	}
	
	return 0;
}