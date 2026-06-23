#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    double power, time, energy;
    double totalEnergy = 0;

    for(int i = 1; i <= 8; i++) {
        cout << "Enter Power Rating (W): ";
        cin >> power;

        cout << "Enter Usage Time (h): ";
        cin >> time;

        energy = power * time;

        totalEnergy += energy;
    }

    cout << "Total Energy Consumed = "
         << totalEnergy << " Wh";

	return 0;
}
