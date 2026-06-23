#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    int choice;
    double value;

    cout << "1. Volts to Millivolts\n";
    cout << "2. Amperes to Milliamperes\n";
    cout << "3. Kilowatts to Watts\n";
    cout << "4. Ohms to Kilo-ohms\n";

    cout << "Enter choice: ";
    cin >> choice;

    cout << "Enter value: ";
    cin >> value;

    switch(choice) {
        case 1:
            cout << value * 1000 << " mV";
            break;
        case 2:
            cout << value * 1000 << " mA";
            break;
        case 3:
            cout << value * 1000 << " W";
            break;
        case 4:
            cout << value / 1000 << " kOhm";
            break;
        default:
            cout << "Invalid choice";
    }

	return 0;
}
