#include <iostream>
#include <vector>

int main()
{
    auto vec = std::vector<int>{1, 2, 3, 4, 5};

    // 1: auto val : vec => int val : vec
    for (auto val : vec)
    {
        std::cout << val << " ";
    }
    std::cout << '\n';

    // 2: auto& val : vec => int& val : vec
    for (auto &val : vec)
    {
        std::cout << val << " ";
    }
    std::cout << '\n';

    // 3: const auto val : vec => const int val : vec
    for (const auto val : vec)
    {
        std::cout << val << " ";
    }
    std::cout << '\n';

    // 4: const auto& val : vec => const int& val : vec
    for (const auto &val : vec)
    {
        std::cout << val << " ";
    }
    std::cout << '\n';

    return 0;
}
