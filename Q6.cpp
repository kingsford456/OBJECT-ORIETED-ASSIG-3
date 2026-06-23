#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    double voltage, current, power;
    char choice;

    do {
        cout << "Enter Voltage (V): ";
        cin >> voltage;

        cout << "Enter Current (A): ";
        cin >> current;

        power = voltage * current;

        cout << "Power = " << power << " W" << endl;

        cout << "Perform another calculation? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

	return 0;
}
