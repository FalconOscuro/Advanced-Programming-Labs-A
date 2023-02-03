#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    int n = 5;
    int result = 1;

    for (int i = 2; i <= n; i++)
        result *= i;
    
    cout << "The factorial of " << n << " is " << result << endl;
}