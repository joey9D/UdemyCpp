#include <cstdint>
#include <iostream>

// Store in an array *array2* the reversed elements of *array1*.

int main()
{
    constexpr static std::uint32_t len = 4;

    std::int32_t array1[len] = {1, 4, 7, 12};
    std::int32_t array2[len]{};

    // for(std::uint32_t i=0; i<len; ++i)
    // {
    //     array2[len - 1 - i] = array1[i];
    // }

    for(std::int32_t i=len-1; i>=0; --i)
    {
        array2[len - 1 - i] = array1[i];
    }

    for(std::uint32_t i=0; i<len; i++)
    {
        std::cout << "At index " << i << " is number " << array2[i] << "\n";
    }

    return 0;
}
