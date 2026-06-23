#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    double reading;

    for (int i = 1; i <= 10; i++) {
        cout << "Enter insulation reading " << i << ": ";
        cin >> reading;

        if (reading < 1) {
            cout << "Insulation failure detected. Test stopped." << endl;
            break;
        }

        cout << "Insulation reading acceptable." << endl;
    }

	return 0;
}
