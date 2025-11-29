#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()
using namespace std;

int main()
{
    // Step 1: Seed the random number generator
    srand(time(0));

    int number1 = rand() % 10; // random number between 0 and 9
    int number2 = rand() % 10; // random number between 0 and 9

    // Step 2: Swap numbers if number1 < number2
    if (number1 < number2)
    {
        int temp = number1;
        number1 = number2;
        number2 = temp;
    }

    // Step 3: Prompt user for the subtraction answer
    int userAnswer;
    cout << "What is " << number1 << " - " << number2 << "? ";
    cin >> userAnswer;

    // Step 4: Check and display result
    if (userAnswer == (number1 - number2))
        cout << "Correct! " << endl;
    else
        cout << "Wrong ?. The correct answer is " << (number1 - number2) << endl;

    return 0;
}
