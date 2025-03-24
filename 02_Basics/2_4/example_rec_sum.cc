#include <cstdint>
#include <iostream>

std::uint32_t sum(std::uint32_t n)
{
    if (n > 0)
        return n + sum(n-1);

    return 0;
}

int main()
{
    std::uint32_t n = 10; // 0..10
    std::uint32_t s = sum(n);

    std::cout << "Sum from 0..10: " << s << std::endl;

    return 0;
}
