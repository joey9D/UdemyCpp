#include <cstdint>
#include <iostream>

int main()
{
    // use fo-loop when it is known, how often
    // something should be executed
    for (std::uint32_t i = 0; i < 5; i++)
    {
        std::cout << i << std::endl;
    }

    return 0;
}
