// My third c++ program

// EXAMPLE OF READING MULTIPLE; READS 3 NUMBERS AND DISPLYS THEIR AVERAGE

#include <iostream>
using namespace std;

int main() 
{
    // Prompt the user to enter three numbers
    double number1, number2, number3;
    cout << "Enter three numbers: ";
    cin >> number1 >> number2 >> number3;

    // Compute Average
    double average = (number1 + number2 + number3) / 3;

    // Display Result
    cout << "The average of " << number1 << ", " << number2 << ", and " << number3 << " is " << average << endl;

    return 0;
}