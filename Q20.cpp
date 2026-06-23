#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    double power, total = 0;

    for (int i = 1; i <= 10; i++) {
        cout << "Enter power reading " << i << ": ";
        cin >> power;

        if (power < 0) {
            cout << "Invalid reading skipped." << endl;
            continue;
        }

        total += power;
    }

    cout << "Total Valid Power Readings = "
         << total << " W" << endl;

	return 0;
}
