#include <iostream>

using namespace std;

int main()
{
    cout << "----Farenheight to Celcius----\n"
        << "Please enter the value to convert:";

    string tempStr;
    cin >> tempStr;

    float fH = stof(tempStr.c_str());
    // Need to check for std::invalid_argument & std::out_of_range

    float c = 5.F/9.F * (fH - 32);
    cout << "Converted to Celcius that is " << c << " degrees." << endl;
}