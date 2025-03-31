#include <iostream>
#include <string>

int main()
{
    const std::string s = "Hello people!";
    std::cout << s << '\n';

    const auto index = s.find("Hallo");
    const auto index2 = s.find("Hell");

    if (index != std::string::npos)
    {
        std::cout << "Found substring!\n";
    }
    else if (index2 != std::string::npos)
    {
        std::cout << "Found second substring!\n";
    }
    else
    {
        std::cout << "Did not find substring!\n";
    }


    std::cout << s.empty() << '\n';
    std::cout << s.length() << '\n';

    return 0;
}
