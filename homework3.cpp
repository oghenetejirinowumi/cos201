#include <iostream>
#include <iomanip>  // for fixed and setprecision
using namespace std;

int main()
{
    double total_purchase_amount, sales_tax;

    cout << "Please enter the total purchase amount (?): ";
    cin >> total_purchase_amount;

    // Compute 6% sales tax
    sales_tax = total_purchase_amount * 0.06;

    cout << fixed << setprecision(2);  // Format to 2 decimal places
    cout << "The sales tax (6%) for ?" << total_purchase_amount 
         << " is ?" << sales_tax << endl;

    // Display total with tax
    double total_with_tax = total_purchase_amount + sales_tax;
    cout << "Total amount including tax: ?" << total_with_tax << endl;

    return 0;
}
