#include <iostream>

int main()
{
    int age1 = 28;
    int age2 = 56;

    // 1.)
    int older_age1;
    if (age1 > age2)
        older_age1 = age1;
    else
        older_age1 = age2;

    // 2.) Ternary Operator
    //                if true, older_age gets value of age1
    //                if false, older_age gets value of age2
//
    //                BOOL EXPR  ? TRUE : FALSE;
    int older_age2 = age1 > age2 ? age1 : age2;

    std::cout << "older_age1: " << older_age1 << std::endl;
    std::cout << "older_age2: " << older_age2 << std::endl;

    return 0;
}
