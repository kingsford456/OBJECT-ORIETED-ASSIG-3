#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    double voltage;

    cout << "Enter solar panel voltage: ";
    cin >> voltage;

    while (voltage >= 18) {
        cout << "Voltage acceptable.\n";
        cout << "Enter solar panel voltage: ";
        cin >> voltage;
    }

    cout << "Solar panel voltage below operating level." << endl;

	return 0;
}
