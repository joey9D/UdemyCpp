#include <cstdint>

class Image
{
    public:
        Image(const std::uint32_t m_width, const std::uint32_t m_heigth);
        ~Image();
    private:
        std::uint32_t m_width;
        std::uint32_t m_heigth;
};
