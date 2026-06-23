#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    double voltage, current, resistance;
    char choice;

    do {
        cout << "Enter Voltage (V): ";
        cin >> voltage;

        cout << "Enter Current (A): ";
        cin >> current;

        resistance = voltage / current;

        cout << "Resistance = " << resistance << " Ohms" << endl;

        cout << "Continue? (Y/N): ";
        cin >> choice;

    } while (choice != 'N' && choice != 'n');

	return 0;
}
