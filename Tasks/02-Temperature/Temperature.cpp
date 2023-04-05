#include <iostream>
#include <limits>

using namespace std;

/// @brief Loops until input is accepted
/// @tparam T input type
/// @param msg Message posted when requesting input
/// @return parsed input
template <typename T> T ParseInput(const char* msg)
{
    T out;
    while(!(cout << msg, cin >> out))
    {
        // If input fails input buffer needs to be reset to avoid infinite loop
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid value please try again." << endl;
    }
    return out;
}

int main()
{
    cout << "----Farenheight to Celcius----" << endl;

    float fH = ParseInput<float>("Please enter the value to convert:");
    float c = 5.F/9.F * (fH - 32);
    cout << "Converted to Celcius that is " << c << " degrees." << endl;
}