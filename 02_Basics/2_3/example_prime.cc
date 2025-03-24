#include <cstdint>
#include <iostream>

// 1.) User-Input: unsigned integer number
// 2.) Compute if the number is a prime number
// 3.) Print out the result
// Prime Number: Only divisble by itself and 1 with a remainder of 0

int main()
{
    bool is_prime = true;

    unsigned int value = 0;

    std::cout << "Enter a value: ";
    std::cin >> value;

    if ( value == 0 || value == 1) {
        is_prime = false;
    }

    for (unsigned int i=2; i<value; i++) {
        // if loop never jumps into this if, it is prime.
        if (value % i == 0) {
            is_prime = false;
        }
    }

    std::cout << "Number " << value << " is prime?\n--> ";
    std::cout << std::boolalpha << is_prime << std::endl;

    return 0;
}
