#include <cstdint>
#include <iostream>
#include <vector>

void print_vector(const std::vector<std::int32_t> &vec)
{
    for (std::size_t i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << ", ";
    }
    std::cout << '\n';
}

int main()
{
    //                        create 5 int values, with value 0
    auto my_vector = std::vector<std::int32_t>(5, 0);
    print_vector(my_vector);

    my_vector[0] = 1337;
    print_vector(my_vector);

    my_vector.push_back(42); // add value at the end of the vector
    print_vector(my_vector);

    // remove the last value of the vector -> last in ,first out
    my_vector.pop_back();
    my_vector.pop_back();
    my_vector.pop_back();
    print_vector(my_vector);

    return 0;
}
