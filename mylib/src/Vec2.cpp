#include "Vec2.hpp"
using namespace my;

#include <iostream>

void Vec2::Print()
{
   std::cout << this->x << ", " << this->y << std::endl;
}

Vec2 Vec2::Add(Vec2& other)
{
   return Vec2(this->x + other.x, this->y + other.y);
}

Vec2 Vec2::operator+(Vec2& other)
{
   return Add(other);
}