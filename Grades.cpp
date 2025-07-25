// Name - Avi Sharma
// PRN - 24070123025
// Batch - EnTC - A1 
// Expt - 3B

#include <iostream>
using namespace std;

int main() {
    float sub1, sub2, sub3, sub4, sub5, avg;

    cout << "Enter marks for Subject 1: ";
    cin >> sub1;
    cout << "Enter marks for Subject 2: ";
    cin >> sub2;
    cout << "Enter marks for Subject 3: ";
    cin >> sub3;
    cout << "Enter marks for Subject 4: ";
    cin >> sub4;
    cout << "Enter marks for Subject 5: ";
    cin >> sub5;

    avg = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;

    cout << "Average = " << avg << endl;

    if (avg >= 90) {
        cout << "Grade is O";
    } else if (avg >= 85) {
        cout << "Grade is A+";
    } else if (avg >= 75) {
        cout << "Grade is A";
    } else if (avg >= 65) {
        cout << "Grade is B+";
    } else if (avg >= 55) {
        cout << "Grade is B";
    } else if (avg >= 40) {
        cout << "Grade is C";
    } else if (avg > 0) {
        cout << "You have failed";
    } else {
        cout << "Invalid input. Marks must be positive.";
    }

    return 0;
}

/*
Sample Output (Tested by Avi Sharma):

Enter marks for Subject 1: 80
Enter marks for Subject 2: 90
Enter marks for Subject 3: 75
Enter marks for Subject 4: 88
Enter marks for Subject 5: 80
Average = 82.6
Grade is A

--- End of Output ---
*/
