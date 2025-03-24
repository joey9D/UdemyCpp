#include <cstdint>
#include <iostream>

#include "exercise.h"

int main()
{
    // Exercise 1
    constexpr auto array_length = std::size_t{100};
    double array1[array_length] = {};

    for (std::size_t i = 0; i < array_length; i++)
    {
        array1[i] = i;
        std::cout << array1[i] << " ";
    }


    // Exercise 2
    auto sum = 0.0;

    sum = array_sum(array1, array_length);
    std::cout << "\n(Exercise 2) Array Sum = " << sum << '\n';

    // Exercise 3
    std::array<double, 100> array2;

    for (std::size_t i = 0; i < array_length; i++)
    {
        array2[i] = i;
        std::cout << array2[i] << " ";
    }
    auto sum2 = 0.0;

    sum2 = array_sum(array2);
    std::cout << "\n(Exercise 3) Array Sum = " << sum2 << '\n';

    return 0;
}
