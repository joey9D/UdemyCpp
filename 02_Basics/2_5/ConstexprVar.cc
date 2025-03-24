#include <cstdint>
#include <iostream>

constexpr int VALUE = 2;

int func(const int val)
{
    const int temp = val * 2;

    return temp / 3;
}

int main()
{
    /**
     * @brief constexpr
     *
     * ensures that the calculation is performed during compile time.
     * The inforamtion (here the numbers) need to be available during compiletime.
     * Exmp:
     * constexpr int v = a * 3 * 5;
     * does not work, because a is not defined during compiletime.
     */
    constexpr int v = 2 * 3 * 5;
    std::cout << func(v) << '\n';

    return 0;
}
