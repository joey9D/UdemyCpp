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
            res_vector[j] = i + j;
        }
    }


    return res_vector;
}

// Exercise 3
ValueT sort_and_max(VectorT &vec)
{
}
