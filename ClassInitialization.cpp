#include <iostream>

using namespace std;
class Point
{
   public:
   int px;
   int py;
   Point()
   {
       px = 0;
       py = 0;
   }
   Point(int x, int y)
   {px=x;py=y;}


};

int main()
{

{
   Point p(10,10); // call constructor with arguments
   std::cout << "p.px = " << p.px << " p.py = " << p.py << std::endl;
}
{
   Point p;       // c++ call default constructor
   std::cout << "p.px = " << p.px << " p.py = " << p.py << std::endl;
}
{
   Point p = Point();   // Create an object and assign to p
   std::cout << "p.px = " << p.px << " p.py = " << p.py << std::endl;
}

{
   Point p = Point(2,3);   // Create an object and assign to p
   std::cout << "p.px = " << p.px << " p.py = " << p.py << std::endl;
}

{
   Point * p = new Point(2,3);   // Create an object and assign to p
   std::cout << "p->px = " << p->px << " p->py = " << p->py << std::endl;
}


   return 0;
}


