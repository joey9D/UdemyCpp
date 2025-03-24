#include <iostream>

// 1.) User-Input: number
// 2.) Compute the absolute value of the number
// 3.) Print out the absolute value
// The number can be a float/double/int etc. its up to you :)

// x < 0: -x
// x >= 0: x

int main()
{
    double input_value = 0.0;

    std::cout << "Enter a number: ";
    std::cin >> input_value;

    if (input_value < 0.0){
        input_value = input_value * (-1.0);
    }
     std::cout << "Absolute value = " << input_value << std::endl;

    return 0;
}
