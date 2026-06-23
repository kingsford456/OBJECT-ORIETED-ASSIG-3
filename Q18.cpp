#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    double power, totalLoad = 0;

    for (int i = 1; i <= 20; i++) {
        cout << "Enter appliance power rating (W): ";
        cin >> power;

        totalLoad += power;

        if (totalLoad > 5000) {
            cout << "Maximum load exceeded. Stop adding appliances." << endl;
            break;
        }
    }

    cout << "Final Total Load = " << totalLoad << " W" << endl;

	return 0;
}
