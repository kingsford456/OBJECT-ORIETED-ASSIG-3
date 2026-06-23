#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    int result;
    int passed = 0, failed = 0;

    for(int i = 1; i <= 15; i++) {
        cout << "Enter 1 for Pass or 0 for Fail: ";
        cin >> result;

        if(result == 1)
            passed++;
        else
            failed++;
    }

    cout << "Passed Components = "
         << passed << endl;

    cout << "Failed Components = "
         << failed << endl;

	return 0;
}
