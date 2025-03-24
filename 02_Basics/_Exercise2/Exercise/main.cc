#include <cstdint>
#include <iostream>

void super_duper_example(const int val)
{
    static constexpr int reset_counter = 10;
    static int counter = 0;

    if (val == reset_counter)
    {
        counter = 0;
        std::cout << "Counter reset. Program closed.\n";
        return;
    }

    if (val % 2 == 0)
    {
        ++counter;
        std::cout << "Counter: " << counter << "; Value: " << val << "\n";
    }
}

int main()
{
    for(int i=0; i<11; i++)
    {
        super_duper_example(i);
    }

    return 0;
}
