#include <iostream>
#include <string>
#include <cstdlib> // FOR RAND, SRAND
#include <ctime> // FOR TIME(0)
#include <iomanip> // FOR FORMATTING
using namespace std;

int main()
{
	string fullname, courseName, locationName;
	bool isPAU;
	int courseChoice, locationChoice, days;
	double regFee, lodgingPerDay, regDiscount = 0, lodgingDiscount = 0, promo = 0;
	
	cout << "PAU HOLIDAY SHORT COURSES REGISTRATION \n";
	
	cout << "Please enter your full name: ";
	getline(cin, fullname);
	
	cout << "Kindly signify if you are a PAU student (enter 1 for true, 0 for false): ";
	cin >> isPAU;
	
	cout << "\nCourses:\n"
         << "1. Photography (3 days, N10,000)\n"
         << "2. Painting (5 days, N8,000)\n"
         << "3. Fish Farming (7 days, N15,000)\n"
         << "4. Baking (5 days, N13,000)\n"
         << "5. Public Speaking (2 days, N5,000)\n";
    cout << "Enter course (1–5): ";
    cin >> courseChoice;
    
    if (courseChoice == 1) { courseName = "Photography"; days = 3; regFee = 10000; }
    else if (courseChoice == 2) { courseName = "Painting"; days = 5; regFee = 8000; }
    else if (courseChoice == 3) { courseName = "Fish Farming"; days = 7; regFee = 15000; }
    else if (courseChoice == 4) { courseName = "Baking"; days = 5; regFee = 13000; }
    else if (courseChoice == 5) { courseName = "Public Speaking"; days = 2; regFee = 5000; }
    else { cout << "Invalid course choice.\n"; return 0; }
    
    cout << "\nLocations:\n"
         << "1. Camp House A (N10,000/day)\n"
         << "2. Camp House B (N2,500/day)\n"
         << "3. Camp House C (N5,000/day)\n"
         << "4. Camp House D (N13,000/day)\n"
         << "5. Camp House E (N5,000/day)\n";
    cout << "Enter location (1–5): ";
    cin >> locationChoice;

    if (locationChoice == 1) { locationName = "Camp House A"; lodgingPerDay = 10000; }
    else if (locationChoice == 2) { locationName = "Camp House B"; lodgingPerDay = 2500; }
    else if (locationChoice == 3) { locationName = "Camp House C"; lodgingPerDay = 5000; }
    else if (locationChoice == 4) { locationName = "Camp House D"; lodgingPerDay = 13000; }
    else if (locationChoice == 5) { locationName = "Camp House E"; lodgingPerDay = 5000; }
    else { cout << "Invalid location choice.\n"; return 0; }
    
    // LODGING & REGISTRATION DISCOUNTS
    double lodgingCost = lodgingPerDay * days;
    
    if (isPAU && (locationChoice == 1 || locationChoice == 2))
        lodgingDiscount = lodgingCost * 0.05;

    if (days > 5 || regFee > 12000)
        regDiscount = regFee * 0.03;

    // Random promo
    srand(time(0));
    int r = rand() % 100 + 1;
    if (r == 7 || r == 77)
        promo = 500;
    
    double total = (regFee - regDiscount) + (lodgingCost - lodgingDiscount) - promo;
    
    // OUTPUT
    cout << fixed << setprecision(2);
	cout << "\n ================REGISTRATION SUMMARY================ \n";
	cout << "Name: " << fullname << "PAU student: " << (isPAU ? "Yes" : "No") <<")\n";
	cout << "Course: " << courseName << " Days: " << days << endl;
	cout << "Registration: N" << regFee << "  (Discount: N" << regDiscount << ")\n";
    cout << "Lodging: N" << lodgingPerDay << " × " << days << " = N" << lodgingCost
         << "  (Discount: N" << lodgingDiscount << ")\n";
         
    cout << "TOTAL: N" << total << endl;
    return 0;
}