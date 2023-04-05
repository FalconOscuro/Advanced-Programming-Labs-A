#include <iostream>
#include <limits> // numeric_limits

using namespace std;

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

int main(int argc, char* argv[])
{
    cout << "----Factorial Finder----" << endl;

    int n = ParseInput<int>("Input a number: ");

    unsigned long int result = 1;
    for (int i = 2; i <= n; i++)
        result *= i;

    cout << "The factorial of " << n << " is " << result << endl;
}