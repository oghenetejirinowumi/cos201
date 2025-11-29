#include <iostream>
#include <string>
using namespace std;

int main() {
    // Input variables
    string fullName;
    int jamb, age, hostelChoice;
    double waec;
    bool firstChoice, disciplinary;

    // Fixed values
    const double baseTuition = 1500000;
    double hostelFee = 0, scholarshipPercent = 0;

    // Input
    cout << "Enter full name: ";
    cin.ignore();
    getline(cin, fullName);

    cout << "Enter JAMB score (0-400): ";
    cin >> jamb;

    cout << "Enter WAEC average (0-100): ";
    cin >> waec;

    cout << "Enter age: ";
    cin >> age;

    cout << "First choice PAU? (1/0): ";
    cin >> firstChoice;

    cout << "Any disciplinary record? (1/0): ";
    cin >> disciplinary;

    cout << "Hostel preference (1=Main, 2=Annex, 3=Day): ";
    cin >> hostelChoice;

    // 1. ADMISSION DECISION
    string admissionStatus;
    if (disciplinary || age < 15) {
        admissionStatus = "Rejected";
    }
    else if ((jamb >= 220 && waec >= 60 && firstChoice) ||
             (jamb >= 200 && waec >= 70)) {
        admissionStatus = "Admitted";
    }
    else {
        admissionStatus = "Pending";
    }

    // 2. SCHOLARSHIP
    if (admissionStatus == "Admitted") {
        if (jamb >= 320) scholarshipPercent = 30;
        else if (jamb >= 280) scholarshipPercent = 20;
        else if (jamb >= 240) scholarshipPercent = 10;
        else scholarshipPercent = 0;

        // Bonus
        if (waec >= 80 && firstChoice) {
            scholarshipPercent += 5;
        }

        if (scholarshipPercent > 35)
            scholarshipPercent = 35;
    }

    // 3. HOSTEL ASSIGNMENT
    string hostelName;
    if (admissionStatus == "Admitted" && !disciplinary) {
        if (hostelChoice == 1) { hostelName = "Main Hostel"; hostelFee = 180000; }
        else if (hostelChoice == 2) { hostelName = "Annex Hostel"; hostelFee = 120000; }
        else { hostelName = "Day Student"; hostelFee = 0; }
    }
    else if (admissionStatus == "Pending") {
        hostelName = "On Hold";
        hostelFee = 0;
    }
    else {
        hostelName = "Not Applicable";
        hostelFee = 0;
    }

    // 4. TOTALS
    double tuitionAfterScholarship =
        baseTuition - (scholarshipPercent / 100.0 * baseTuition);

    double totalPayable =
        tuitionAfterScholarship + hostelFee;

    // OUTPUT
    cout << "\n===== ADMISSION RESULT =====\n";
    cout << "Name: " << fullName << endl;
    cout << "Admission Status: " << admissionStatus << endl;

    cout << "Scholarship: " << scholarshipPercent << "%  ";
    cout << "Tuition After Scholarship: ?" << tuitionAfterScholarship << endl;

    cout << "Hostel: " << hostelName << "  Fee: ?" << hostelFee << endl;

    cout << "TOTAL PAYABLE: ?" << totalPayable << endl;

    return 0;
}
