#include <iostream>

// creates copy v of variable a
void f1(int v)
{
    std::cout << "f1: " << v << '\n';
    std::cout << "Copy of a: " << &v << '\n';
}

// C Style: pointer
void f2(int *const v)
{
    std::cout << "f2: " << *v << '\n';
    std::cout << "Pointer to *v to address " << v << '\n';
}

// C++ Style: reference/address. Use when copy should be avoided.
void f3(int &v)
{
    std::cout << "f3: " << v << '\n';
    std::cout << "Reference/address of a with &v in local function: " << &v << '\n';
}

int main()
{
    int a = 2;
    std::cout << &a << '\n';

    f1(a);
    f2(&a);
    f3(a);

    return 0;
}
