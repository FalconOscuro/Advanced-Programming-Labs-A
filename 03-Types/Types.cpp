#include <iostream>
#include <iomanip>

using namespace std;

// Gives a stream describing the size of the given type
#define SIZESTREAM(type)                                            \
    "Type " << setw(22) << setfill(' ') << #type << " has size: "   \
    << right << setw(2) << setfill('0') << sizeof(type) << endl

// Repeats above macro for both signed and unsigned types
#define SIZESTREAM_US(type) SIZESTREAM(type) << SIZESTREAM(unsigned type)

int main()
{
    // bool
    cout << SIZESTREAM(bool);

    // character types
    cout << SIZESTREAM_US(char);
    cout << SIZESTREAM(char16_t);
    cout << SIZESTREAM(char32_t);

    // floating point
    cout << SIZESTREAM(float);
    cout << SIZESTREAM(double);
    cout << SIZESTREAM(long double);

    // integer
    cout << SIZESTREAM_US(short int);
    cout << SIZESTREAM_US(int);
    cout << SIZESTREAM_US(long int);
    cout << SIZESTREAM_US(long long int);
}