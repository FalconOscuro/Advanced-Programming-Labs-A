#include <iostream>

using namespace std;

int main()
{
    cout << "----Average Finder----" << endl;

    int sum = 0, n = 0;

    // The condition is just cin >> x && x >= 0
    // Cout shouldn't have any bearing on the condition
    for (int x;
            cout << "\nTo exit enter an negative number or character.\n"
                << "Please enter a number:", 
            cin >> x && x >= 0; n++)
        sum += x;

    if (n == 0)
        cout << "\nNo numbers were input." << endl;

    else
        cout << "\nThe average of the numbers input is " << (float)sum / n << endl;
}