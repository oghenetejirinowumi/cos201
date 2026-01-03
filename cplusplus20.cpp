#include <iostream>
using namespace std;

int main()
{
    // Initializes an array with 8 elements
    int arr[8] = {12, 5, 9, 27, 3, 18, 21, 7};
    
    // Find the largest element
    int max = arr[0];  // Assume the first element is the largest
    for (int i = 1; i < 8; i++) {
        if (arr[i] > max) {
            max = arr[i];   // UPDATE MAX
        }
    }
    
    // Find the smallest element
    int min = arr[0];  // Assume the first element is the smallest
    for (int i = 1; i < 8; i++) {
        if (arr[i] < min) {
            min = arr[i];   // UPDATE MIN
        }
    }
    
    cout << "Largest element: " << max << endl;
    cout << "Smallest element: " << min << endl;
    
    return 0;
}
