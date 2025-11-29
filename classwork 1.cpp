// DECLARE VARIABLE TYPE OF INTEGER
// INPUT OPERATION TO ALLOW THE USER ENTER THE INTEGER
// IF STATEMENT OPERATIONS TO CHECK IF THE NUMBER IS DIVISIBLE BY 5
// DISPLAY OPERATION TO DISPLAY IF THE NUMBER IS EVEN (HiEven)

#include <iostream>
using namespace std;

int main()
{
    int integer;  

    cout << "Welcome to HiEven!" << endl;
    cout << "\nPlease enter a valid integer: ";
    cin >> integer;  


    if (integer % 5 == 0)
    {
        cout << "This number is HiFive!" << endl;  
    }
    else if (integer % 2 == 0)
    {
    	cout << "This number is HiEven!" << endl;
	}
	else 
	{
		cout << "This number is NEITHER HiFive or HiEven!" << endl;
	}

    return 0;
}
