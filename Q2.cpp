#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    double temperature;

    cout << "Enter Cable Temperature (°C): ";
    cin >> temperature;

    if (temperature > 70)
        cout << "Cable overheating detected.";
    else
        cout << "Cable temperature is within safe range.";

	return 0;
}
