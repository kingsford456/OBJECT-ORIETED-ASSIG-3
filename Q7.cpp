#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    double wattage, totalPower = 0;

    for(int i = 1; i <= 12; i++) {
        cout << "Enter wattage of lighting point "
             << i << ": ";
        cin >> wattage;

        totalPower += wattage;
    }

    cout << "Total Lighting Load = "
         << totalPower << " W";

	return 0;
}
