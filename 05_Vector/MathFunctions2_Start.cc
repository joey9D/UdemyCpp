#include <cmath>
#include <iostream>
#include <vector>

// Aufgabe: Verwende ranged-based for loops für die Funktionen!

void fill_vector(std::vector<double> &vec)
{
    // for (std::size_t i = 0; i < vec.size(); i++)
    // {
    //     vec[i] = static_cast<double>(i);
    // }
    // Laufvariable ist/muss trotzdem noch dabei sein.
    for (int i = 0; double &val : vec)
    {
        val = static_cast<double>(i);
        i++;
    }
}

void print_vector(const std::vector<double> &vec)
{
    // for (const double &val : vec)
    // {
    //     std::cout << val << ' ';
    // }

    for (int i = 0; const double &val : vec)
    {
        std::cout << val << " ";
        i++;
    }
    std::cout << '\n';
}

void exp_vector(std::vector<double> &vec)
{
    for (double &val : vec)
    {
        val = std::exp(val);
    }
}

void log_vector(std::vector<double> &vec)
{
    // for (std::size_t i = 0; i < vec.size(); i++)
    // {
    //     vec[i] = std::log(vec[i]);
    // }

    for (double &val : vec)
    {
        val = std::log(val);
    }
}

int main()
{
    auto my_vector = std::vector<double>(3, 0.0);

    fill_vector(my_vector);
    print_vector(my_vector);

    exp_vector(my_vector);
    print_vector(my_vector);

    log_vector(my_vector);
    print_vector(my_vector);

    return 0;
}
