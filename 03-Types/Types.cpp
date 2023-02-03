#include <iostream>

using namespace std;

/// @brief Returns formatted string displaying the size of type T
/// @param tName Name associated to type T
template <typename T>
const string GetSizeString(const string tName)
{    
    return string("Type " + tName + " has size " + to_string(sizeof(T)));
}

/* 
* Macro shortening GetSizeString automatically converting the type to a string as an argument
* then printing returned string
*/
#define PRINTSIZE(type) cout << GetSizeString<type>(#type) << endl;

/*
* Above macro repeated for both signed and unsgned types
*/
#define PRINTSIZE_US(type) PRINTSIZE(type) PRINTSIZE(unsigned type)

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