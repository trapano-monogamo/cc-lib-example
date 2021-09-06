namespace my
{
   struct Vec2
   {
      float x,y;

      Vec2() : x(0), y(0) {}
      Vec2(float x, float y) : x(x), y(y) {}

      void Print();
      Vec2 Add(Vec2& other);
      Vec2 operator+(Vec2&other);
   };
}