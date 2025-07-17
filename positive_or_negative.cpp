// Name - Avi Sharma
// PRN - 24070123025
// Batch - EnTC - A1 
// Expt - 3A

#include <iostream>
using namespace std;

int main() {
    float a;
    cout << "Enter any number: ";
    cin >> a;

    if (a > 0) {
        cout << "The number " << a << " is positive.";
    } else if (a < 0) {
        cout << "The number " << a << " is negative.";
    } else {
        cout << "The number is zero.";
    }

    return 0;
}

/*
Sample Output (Run by Avi Sharma):

Enter any number: -45
The number -45 is negative.

-----------------------------

Enter any number: 22
The number 22 is positive.

-----------------------------

Enter any number: 0
The number is zero.

--- End of Program ---
*/
