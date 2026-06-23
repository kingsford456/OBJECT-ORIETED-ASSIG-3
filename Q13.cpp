#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    double resistance;

    cout << "Enter earth resistance: ";
    cin >> resistance;

    while (resistance <= 5) {
        cout << "Resistance acceptable.\n";
        cout << "Enter earth resistance: ";
        cin >> resistance;
    }

    cout << "Earth resistance too high. Improve earthing system." << endl;
    
	return 0;
}
