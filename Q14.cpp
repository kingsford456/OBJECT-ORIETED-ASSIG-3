#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    string code;
    int attempts = 0;

    while (attempts < 3) {
        cout << "Enter access code: ";
        cin >> code;

        if (code == "BEE208") {
            cout << "Access granted." << endl;
            return 0;
        }

        attempts++;
    }

    cout << "Access denied. Maximum attempts reached." << endl;

	return 0;
}
