#include <cstdint>
#include <iostream>

int func(const int val)
{
    /**
     * Counter keeps its value, even after the function is finished,
     * because static writes the var once into the memory, during
     * compile time.
     */
    static int counter = 0;

    const int temp = val * 2;

    ++counter;
    std::cout << "Counter: " << counter << "\n";

    return temp / 3;
}

int main()
{
    std::cout << func(1) << '\n';
    std::cout << func(2) << '\n';
    std::cout << func(3) << '\n';

    return 0;
}
