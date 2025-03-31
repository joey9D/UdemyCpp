#include <iostream>
#include <string>

bool is_palindrom(std::string_view text)
{
    std::string rtext = std::string{};
    for (auto i = text.rbegin(); i != text.rend(); i++)
    {
        rtext += *i;
    }

    return text == rtext;
}

int main()
{
    const auto text = std::string{"anna"};
    const auto check = is_palindrom(text);

    std::cout << "Is Palindrom: " << std::boolalpha << check << '\n';

    const std::string text2 = std::string{"papa"};
    const bool check2 = is_palindrom(text2);

    std::cout << "Is Palindrom: " << std::boolalpha << check2 << '\n';

    return 0;
}
