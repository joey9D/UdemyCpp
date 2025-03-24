#include <cstdint>
#include <iostream>


int func(const int val)
{
    const int temp = val * 2;

    return temp / 3;
}

int main()
{
    int v = 2;
    int res = func(v);
    std::cout << res << '\n';

    return 0;
}
