#include <iostream>

int main()
{
    // 1 Byte
    bool my_bool1 = true;
    bool my_bool2 = false;

    // 1 Byte = 8 Bit (2^8 = 256)
    char my_char = 10;

    // 2 Byte = 16 Bit (2^16 ~ 65.000)
    short my_short = 300;

    // 4 Byte = 32 Bit (2^32 ~ 4.000.000.000)
    int my_int = 100'000;

    // 8 Byte = 64 Bit (2^64)
    long long my_ll = 5'000'000'000;

    // 4 Byte = 32 Bit
    float my_float = 10.0;

    // 8 Byte = 64 Bit
    double my_dbl = 10.0;

    std::cout << "data types: " << std::endl;
    std::cout << "char: " << my_char << std::endl;
    std::cout << "short: " << my_short << std::endl;
    std::cout << "int: " << my_int << std::endl;
    std::cout << "long long: " << my_ll << std::endl;
    std::cout << "float:  " << my_float << std::endl;
    std::cout << "double: " << my_dbl << std::endl;

    return 0;
}
