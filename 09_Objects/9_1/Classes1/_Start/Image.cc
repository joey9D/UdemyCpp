#include <iostream>

#include "Image.h"

Image::Image(const std::uint32_t width, const std::uint32_t height)
{
    m_width = width;
    m_heigth = height;
    std::cout << "Object created.\n";
}

Image::~Image()
{
    std::cout << "Object destroyed!\n";
}
