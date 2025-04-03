#include <iostream>

#include "exercise.h"

// Exercise 2
std::string_view get_oldest_friend(const Friends &friends)
{
    // no idea how to implement the extra variables
    auto oldest_friend = std::string_view{};
    auto oldest_age = std::int32_t{};

    // loop-frame was correct
    for (const auto &[pers, pair] : friends)
    {
        // condition missing the variables. Idea was correct.
        if (pair.first > oldest_age)
        {
            oldest_age = pair.first;
            oldest_friend = pers;
        }
    }

    return oldest_friend;
}
/*
NOTE:
Read the function header to get extra inforamtion. std::string_view says return type should be string_view.
*/


std::string_view get_heaviest_friend(const Friends &friends)
{
    std::string_view heaviest_friend = std::string_view{};
    std::int32_t max_weight = std::int32_t{};

    for (const auto &[pers, pair] : friends)
    {
        if (pair.second > max_weight)
        {
            max_weight = pair.second;
            heaviest_friend = pers;
        }
    }

    return heaviest_friend;
}
