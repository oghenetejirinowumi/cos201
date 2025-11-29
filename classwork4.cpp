#include <iostream>
#include <string> 

using namespace std;

int main()
{
	int year;
	string zodiacSign;

	cout << "Welcome To The Chinese Zodiac Sign Generator" << endl; 
	cout << "Enter a year to find its Chinese Zodiac sign: ";
	cin >> year;

	// The Chinese Zodiac sign is determined by the remainder when the year is divided by 12.
	int remainder = year % 12;


	switch (remainder)
	{
		case 0:
			zodiacSign = "Monkey";
			break;
		case 1:
			zodiacSign = "Rooster";
			break;
		case 2:
			zodiacSign = "Dog";
			break;
		case 3:
			zodiacSign = "Pig";
			break;
		case 4:
			zodiacSign = "Rat";
			break;
		case 5:
			zodiacSign = "Ox";
			break;
		case 6:
			zodiacSign = "Tiger";
			break;
		case 7:
			zodiacSign = "Rabbit";
			break;
		case 8:
			zodiacSign = "Dragon";
			break;
		case 9:
			zodiacSign = "Snake";
			break;
		case 10:
			zodiacSign = "Horse";
			break;
		case 11:
			zodiacSign = "Sheep";
			break;
	}

	cout << "---------------------------------------" << endl;
	cout << "The Chinese Zodiac sign for the year " << year << " is the " << zodiacSign << "." << endl;

	return 0;
}