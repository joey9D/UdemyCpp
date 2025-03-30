#include <algorithm>
#include <iostream>
#include <vector>

#include "exercise.h"

// Exercise 2
VectorT max_row_values(MatrixT &matrix)
{
    //std::vector<double> res_vector(3, 0.0);
    // better
    std::vector<double> res_vector(matrix.size(), 0.0);

    for (size_t i = 0; i != matrix.size(); i++)
    {
        double active_row_max_value = matrix[i][0];

        // 1 instead of 0
        for (size_t j = 1; j != matrix[i].size(); ++j)
        {
            // wrong
            // res_vector[j] = static_cast<double>(i + j);

            if (matrix[i][j] > active_row_max_value)
            {
                active_row_max_value = matrix[i][j];
            }
        }
        res_vector[i] = active_row_max_value;
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
