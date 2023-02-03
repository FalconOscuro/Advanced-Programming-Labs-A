#include <iostream>

using namespace std;

#define PRINTSIZE(type) cout << GetSizeString<type>(#type) << endl;
#define PRINTSIZE_US(type) PRINTSIZE(type) PRINTSIZE(unsigned type)

template <typename T>
const string GetSizeString(const string tName)
{    
    return string("Type " + tName + " has size " + to_string(sizeof(T)));
}

int main()
{
    // bool
    PRINTSIZE(bool);

    // character types
    PRINTSIZE_US(char);
    PRINTSIZE(char16_t);
    PRINTSIZE(char32_t);

    // floating point
    PRINTSIZE(float);
    PRINTSIZE(double);
    PRINTSIZE(long double);

    // integer
    PRINTSIZE_US(short int);
    PRINTSIZE_US(int);
    PRINTSIZE_US(long int);
    PRINTSIZE_US(long long int);
}