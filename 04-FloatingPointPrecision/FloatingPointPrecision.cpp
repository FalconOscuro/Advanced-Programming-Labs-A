#include <iostream>
#include <cstdlib> // random
#include <time.h> // time
#include <limits>
#include <iomanip>

using namespace std;


// Checks if two variables are identical and prints results to the console
// Could do this as a function but makes displaying the strings simpler
#define ARE_IDENTICAL(a, b)                         \
cout << setprecision(20) << "When:\n"               \
 << "a = " << #a << " = " << a << "\n"              \
 << "b = " << #b << " = " << b << "\n"              \
 << "a and b are " << ((a == b) ? "" : "not ") << "identical.\n" << endl;

int main()
{
    srand(time(NULL));

    const double x = (double)rand() / 100000;
    const double y = (double)rand() / 100000;

    cout << "Test data:\n"
        << "x = " << to_string(x) << "\n"
        << "y = " << to_string(y) << "\n"
        << endl;

    ARE_IDENTICAL((x + y) / x, 1.0 + (y / x));

    ARE_IDENTICAL(x / y, 1.0);

    double n = INT64_MAX;
    while(y / n != numeric_limits<double>::infinity())
        n /= 10;

    cout << setprecision(6) << "Divde by zero error for y / n at n = " << n << endl;

    n = INT64_MAX;
    while(x / n != numeric_limits<double>::infinity())
        n /= 10;

    cout << setprecision(6) << "Divde by zero error for x / n at n = " << n << endl;
}