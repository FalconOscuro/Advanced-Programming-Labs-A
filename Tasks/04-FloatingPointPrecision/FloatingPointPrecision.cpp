#include <iostream>
#include <cstdlib>  // rand srand
#include <time.h>   // time
#include <limits>   // numeric_limits
#include <iomanip>  // setw setprecision
#include <cstring>  // strlen

using namespace std;

// Checks if two variables are identical and prints results to the console
// Could do this as a function but makes displaying the strings simpler
#define FORMAT_COMPARISON_STREAM(a, b, w)                           \
    setprecision(20) << "When:\n"                                   \
    << "a = " << setw(w) << #a << " = " << a << "\n"                \
    << "b = " << setw(w) << #b << " = " << b << "\n"                \
    << "a and b are " << ((a == b) ? "" : "not ") << "identical.\n" << endl

// Automatically formats by finding maximum string length
#define COMPARISON_STREAM(a, b) \
    FORMAT_COMPARISON_STREAM(a, b, max(strlen(#a), strlen(#b)))

int main()
{
    // Randomly set the two constants
    srand(time(NULL));
    const double x = (double)rand() / 100000;
    const double y = (double)rand() / 100000;

    cout << "Test data:\n"
        << "x = " << to_string(x) << "\n"
        << "y = " << to_string(y) << "\n"
        << endl;

    cout << COMPARISON_STREAM((x + y) / x, 1.0 + (y / x));

    // Divide by ten until divide by 0 error where y / n = inifinity
    double n = INT64_MAX;
    while(y / n != numeric_limits<double>::infinity())
        n /= 10;
    cout << setprecision(6) << "Divde by zero error for y / n at n = " << n 
        << endl;

    // Repeat for x
    n = INT64_MAX;
    while(x / n != numeric_limits<double>::infinity())
        n /= 10;
    cout << setprecision(6) << "Divde by zero error for x / n at n = " << n 
        << endl;
}