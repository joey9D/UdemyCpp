#include <iostream>

#include "Matrix.h"

int main()
{
    const auto m = Matrix{1.0, 2.0, 3.0, 4.0};
    m.print_matrix();

    Matrix m2 = Matrix();
    m2.print_matrix();

    return 0;
}
