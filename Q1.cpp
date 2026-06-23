#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    double pf;

    cout << "Enter Power Factor: ";
    cin >> pf;

    if (pf < 0 || pf > 1)
        cout << "Invalid power factor";
    else if (pf <= 0.50)
        cout << "Poor power factor";
    else if (pf <= 0.80)
        cout << "Fair power factor";
    else if (pf <= 0.95)
        cout << "Good power factor";
    else
        cout << "Excellent power factor";

	return 0;
}
