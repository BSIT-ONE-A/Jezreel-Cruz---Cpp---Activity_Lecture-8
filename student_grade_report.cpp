
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string password;
    string fullName;
    string yearSection;

    string subjects[5] = {
        "Programming 1",
        "Database",
        "Networking",
        "Operating System",
        "NSTP"
    };

    float grades[5];
    float total = 0;
    float average;

    cout << "************************************\n";
    cout << "             STUDENT LOGIN          \n";
    cout << "************************************\n";

    cout << "Enter Password: ";
    cin >> password;

    while (password != "Jez_987546WQRTY") {
        cout << "\nIncorrect Password!\n";
        cout << "Please try again: ";
        cin >> password;
    }

    cout << "\nLogin Successful!\n";

    cin.ignore();

    cout << "\n************************************\n";
    cout << "         STUDENT GRADE REPORT       \n";
    cout << "************************************\n";

    cout << "Enter Name: ";
    getline(cin, fullName);

    cout << "Enter Year and Section: ";
    getline(cin, yearSection);

    cout << "\n************************************\n";
    cout << "            SUBJECT GRADES         \n";
    cout << "************************************\n";

    for (int i = 0; i < 5; i++) {
        cout << "Enter " << subjects[i] << " Grade: ";
        cin >> grades[i];

        total = total + grades[i];
    }

    average = total / 5;

    cout << "\n************************************\n";
    cout << "         STUDENT GRADE REPORT       \n";
    cout << "************************************\n";

    cout << "Name: " << fullName << endl;
    cout << "Year and Section: " << yearSection << endl;

    cout << "\n************************************\n";
    cout << "            SUBJECT GRADES         \n";
    cout << "************************************\n";

    for (int i = 0; i < 5; i++) {
        cout << left << setw(25) << subjects[i]
             << right << grades[i] << endl;
    }

    cout << "------------------------------------\n";

    cout << "Total: " << total << endl;
    cout << fixed << setprecision(2);
    cout << "Average: " << average << endl;

    cout << "Overall Remarks: ";

    if (average >= 75) {
        cout << "PASSED" << endl;
    } else {
        cout << "FAILED" << endl;
    }

    cout << "************************************\n";
    cout << "     Student Grade Report. (Jez)    \n";
    cout << "************************************\n";

    return 0;
}
