#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    cout << "----Factorial Finder----" << endl;
    cout << "Input a number: ";

    int n;
    cin >> n;

    int result = 1;

    for (int i = 2; i <= n; i++)
        result *= i;
    
    cout << "The factorial of " << n << " is " << result << endl;
}