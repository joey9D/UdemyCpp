#include <cstdint>
#include <iostream>

std::int32_t *array_constructor(const std::int32_t value,
                                const std::size_t length)
{
    auto array = new std::int32_t[length];

    for (std::uint32_t i = 0; i < length; i++)
    {
        array[i] = value;
    }
    std::cout << "array: " << array << "\n";
    std::cout << "array: " << &array << "\n";
    std::cout << "array: " << *array << "\n";

    return array;
}

int main()
{
    // Exercise
    auto input_array_length = std::size_t{0};
    auto input_array_value = std::int32_t{0};

    std::cout << '\n' << "Enter the array length: ";
    std::cin >> input_array_length;
    std::cout << '\n' << "Enter the array value: ";
    std::cin >> input_array_value;
    std::cout << '\n';

    auto *array2 = array_constructor(input_array_value, input_array_length);

    for (std::size_t i = 0; i < input_array_length; i++)
    {
        std::cout << array2[i] << ' ';
    }
    std::cout << "\n";

    /**
     * @note see also HeapMemory1.cc
     */
    std::cout << "array2: " << array2 << "\n";
    std::cout << "array2: " << &array2 << "\n";
    std::cout << "array2: " << *array2 << "\n";

    delete[] array2;
    array2 = nullptr;

    return 0;
}
