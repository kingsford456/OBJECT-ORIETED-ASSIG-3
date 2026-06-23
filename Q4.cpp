#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    int choice;

    cout << "1. 5 A Fuse\n";
    cout << "2. 10 A Fuse\n";
    cout << "3. 13 A Fuse\n";
    cout << "4. 20 A Fuse\n";
    cout << "5. 32 A Fuse\n";

    cout << "Select Fuse Rating: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Application: Small electronic devices";
            break;
        case 2:
            cout << "Application: Lighting circuits";
            break;
        case 3:
            cout << "Application: Domestic socket outlets";
            break;
        case 4:
            cout << "Application: Water heaters";
            break;
        case 5:
            cout << "Application: Industrial equipment";
            break;
        default:
            cout << "Invalid selection";
    }

	return 0;
}
