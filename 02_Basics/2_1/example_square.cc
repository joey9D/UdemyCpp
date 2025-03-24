#include <iostream>

using namespace std;
// 1.) User-Input: side length of a square
// 2.) Compute the perimeter and area of a square.
// 3.) Print out the values to the console.
// The variable a should be a double

int main()
{
    float side_length_a = 0.0;
    float side_length_b = 0.0;

    float perimeter = 0.0;
    float area = 0.0;

    cout << "Please enter first number: ";
    cin >> side_length_a;

    cout << "Please enter second number: ";
    cin >> side_length_b;

    perimeter = (2 * side_length_a) + (2 * side_length_b);
    area = side_length_a * side_length_b;

    cout << "Perimeter = " << perimeter << endl;
    cout << "Area = " << area << endl;

    return 0;
}
