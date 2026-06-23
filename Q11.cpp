#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    double temperature;

    cout << "Enter motor temperature: ";
    cin >> temperature;

    while (temperature <= 90) {
        cout << "Temperature is safe.\n";
        cout << "Enter motor temperature: ";
        cin >> temperature;
    }

    cout << "Motor temperature unsafe. Stop motor test." << endl;

    

	return 0;
}
