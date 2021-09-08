#include "Vec2.hpp"
#include <iostream>

int main()
{
   my::Vec2 v0(0.0f, 1.0f);
   my::Vec2 v1(0.3f, 0.8f);

   my::Vec2 res = v0 + v1;
   res.Print();


   std::cout << "cacca pupu" << std::endl;

   return 0;
}