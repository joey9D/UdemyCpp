#include <cstdint>
#include <iostream>
#include <map>
#include <string>

int main()
{
    auto my_map = std::map<std::string, std::uint32_t>{};
    my_map["Jan"] = 28;
    my_map["Dennis"] = 31;
    my_map["Lisa"] = 33;
    my_map["Jan"] = 29;

    for (const auto &val : my_map)
    {
        std::cout << val.first << ' ' << val.second << '\n';
    }

    std::cout << my_map["Jan"] << '\n';

    auto my_map2 = std::map<std::string, std::pair<std::uint32_t, std::uint32_t>>{};
    my_map2["Bot"] = {32, 56};

    auto it = my_map2.begin();

    std::cout << "Name: " << it->first << " K/D: " << it->second.first << "/" << my_map2.begin()->second.second << '\n';

    // C++17
    auto search_str = "Jan";
    const auto search_it = my_map.find(search_str);
    bool found_key = search_it != my_map.end();
    std::cout << "found_key: " << std::boolalpha << found_key << '\n';

    // C++20
    bool found_key2 = my_map.contains(search_str);
    std::cout << "foud_key: " << std::boolalpha << found_key2 << '\n';

    return 0;
}
