#include <iostream>
using namespace std;

int main() 
{
    // Enter a degree in Celsius
    double celsius;
    cout << "Enter a degree in Celsius: ";
    cin >> celsius;
    
    // Obtain a Fahrenheit degree
    double fahrenheit = ((9.0 / 5) * celsius) + 32.0;
    
    // Display result
    cout << "Celsius " << celsius << " is "
         << fahrenheit << " in Fahrenheit." << endl;
        
    return 0;
}
