#include <iostream>
#include <limits>

using namespace std;

int main()
{
    cout << "----Farenheight to Celcius----" << endl;

    float fH;
    while (!(cout << "Please enter the value to convert:", cin >> fH))
    {
        // If input fails input buffer needs to be reset to avoid infinite loop
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid value please try again." << endl;
    }

    float c = 5.F/9.F * (fH - 32);
    cout << "Converted to Celcius that is " << c << " degrees." << endl;
}