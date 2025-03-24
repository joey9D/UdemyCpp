#include <cstdint>
#include <iostream>

// global constant value, initialized during compiletime.
constexpr float PI = 3.14159;
//                the value should not be altered within the function
float circle_area(const float radius)
{
    return PI * radius * radius;
}
// executed during compiletime. It is possible but not necassary,
// to make it constexpr.
constexpr std::uint32_t sum(const std::uint32_t n)
{
    if (n > 1)
        return n + sum(n - 1);

    return n;
}

int main()
{
    // initialized during compiletime and constant
    constexpr std::uint32_t n = 10;
    constexpr std::uint32_t s = sum(n);

    std::cout << "Sum from 0..10: " << s << std::endl;

    return 0;
}
