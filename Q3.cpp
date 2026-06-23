#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    double ratedCurrent, startingCurrent;

    cout << "Enter Rated Current (A): ";
    cin >> ratedCurrent;

    cout << "Enter Starting Current (A): ";
    cin >> startingCurrent;

    if (startingCurrent > 3 * ratedCurrent)
        cout << "High starting current. Use proper motor starter.";
    else
        cout << "Starting current is acceptable.";

	return 0;
}
