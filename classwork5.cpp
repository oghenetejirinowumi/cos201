/*
Given a program that prompts the user to enter an answer 
for a question on subtraction (lecture note 2 (slides 27-28)).
Using a loop, write the program to let the user enter a new 
answer until it is correct
*/

#include <iostream>
#include <cstdlib>  // for rand()
using namespace std;

int main()
{
    int num1 = rand() % 10;
    int num2 = rand() % 10;
    int value_resp, actual_ans = num1 - num2;

    cout << "What is the value of " << num1 << " - " << num2 << "? ";
    cin >> value_resp;

    while (value_resp != actual_ans)
    {
        cout << "Wrong answer, please try again. What is the value of "
             << num1 << " - " << num2 << "? ";
        cin >> value_resp;
    }

    cout << "You got it!";
    return 0;
}
