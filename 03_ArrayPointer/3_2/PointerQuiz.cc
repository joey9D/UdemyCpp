#include <iostream>

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;

    int *p_d = &a; // points to 1, contains the address of a
    int *p_e = &b; // points to 2, contains the address of b
    int *p_f = &c; // points to 3, contains the address of c

    *p_d = (2 * (*p_e)) + (3 * (*p_f)); // a = 13
    p_d = &b; // gets address of b, points to b=2
    p_f = &a; // gets address of a, points to a=13

    *p_e = *p_d + *p_f; // 2 + 13 = 15 = b

    std::cout << a << '\n';     // 13
    std::cout << *p_d << '\n';  // points to b -> 15
    std::cout << *p_e << '\n';  // points to b -> 15
    std::cout << *p_f << '\n';  // points to a -> 13

    return 0;
}
