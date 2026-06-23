#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    double L1, L2, L3, average;

    for(int i = 1; i <= 6; i++) {
        cout << "\nSet " << i << endl;

        cout << "Enter Line 1 Current: ";
        cin >> L1;

        cout << "Enter Line 2 Current: ";
        cin >> L2;

        cout << "Enter Line 3 Current: ";
        cin >> L3;

        average = (L1 + L2 + L3) / 3;

        cout << "Average Current = "
             << average << " A" << endl;
    }

	return 0;
}
