#include <cmath>
#include <iostream>
#include <vector>

// Aufgabe: Verwende ranged-based for loops für die Funktionen!

// use as/with template function, to make it work with every data type(bool, int, char, ...)
template <typename T>
void fill_vector(std::vector<T> &vec)
{
    for (int i = 0; auto &value : vec)
    {
        value = static_cast<T>(i); // cast from int to T, whichever data type has in the current run
        i++;
    }
}

template <typename T>
void print_vector(const std::vector<T> &vec)
{
    for (int i = 0; const auto &value : vec)
    {
        std::cout << "Vec[" << i << "] = " << value << '\n';
        i++;
    }
    std::cout << '\n';
}

template <typename T>
void exp_vector(std::vector<T> &vec)
{
    for (auto &value : vec)
    {
        value = std::exp(value);
    }
}

template <typename T>
void log_vector(std::vector<T> &vec)
{
    for (auto &value : vec)
    {
        value = std::log(value);
    }
}

int main()
{
    auto my_vector = std::vector<double>(3, 0.0);
    std::vector template_vec_1 = std::vector<int>(3, 0);
    std::vector template_vec_2 = std::vector<char>{'h', 'e', 'l', 'l'};

    fill_vector(my_vector);
    print_vector(my_vector);

    exp_vector(my_vector);
    print_vector(my_vector);

    log_vector(my_vector);
    print_vector(my_vector);


    fill_vector(template_vec_1);
    print_vector(template_vec_1);

    exp_vector(template_vec_1);
    print_vector(template_vec_1);

    log_vector(template_vec_1);
    print_vector(template_vec_1);


    print_vector(template_vec_2);


    return 0;
}
