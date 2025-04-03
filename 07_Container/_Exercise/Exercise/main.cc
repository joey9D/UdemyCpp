#include <cstdint>
#include <iostream>
#include <map>
#include <string>
#include <tuple>
#include <utility>

#include "exercise.h"

int main()
{
    // Exercise 1
    auto friends = Friends{};

    friends["Max"] = {23, 90};
    friends["Sam"] = {27, 80};
    friends["Luca"] = {29, 92};

    for (const auto &[pers, pair] : friends)
    {
        std::cout << "Friend: " << pers << " - Age: " << pair.first << ", Weight: " << pair.second << '\n';
    }


    // Exercise 2
    const auto oldest_friend = get_oldest_friend(friends);
    const auto heaviest_friend = get_heaviest_friend(friends);

    std::cout << "My oldest friend: " << oldest_friend << '\n';
    std::cout << "My heaviest friend: " << heaviest_friend << '\n';

    return 0;
}
