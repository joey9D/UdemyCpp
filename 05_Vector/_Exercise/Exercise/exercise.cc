#include <algorithm>
#include <iostream>
#include <vector>

#include "exercise.h"

// Exercise 2
VectorT max_row_values(MatrixT &matrix)
{
    std::vector<double> res_vector(3, 0.0);

    for (size_t i = 0; i != matrix.size(); i++)
    {
        for (size_t j = 0; j != matrix[i].size(); j++)
        {
            res_vector[j] = static_cast<double>(i + j);
        }
    }

    return res_vector;
}

// Exercise 3
bool sort_ascending(const double i, const double j)
{
    return i < j;
}
ValueT sort_and_max(VectorT &vec)
{
    //std::vector<double> sorted_vec(vec.size(), 0.0);

    std::sort(vec.begin(), vec.end(), sort_ascending);

    double max = vec.back();

    return max;
}
