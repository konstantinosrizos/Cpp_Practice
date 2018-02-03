#include <iostream>


class Point {

protected:
    int x;
    int y;
    void setx (int val){x=val;}

public:
    Point(){x=0; y=0;}
    void set_x(int val){this->x = val;}
    void set_y(int val){this->y = val;}

friend void print(Point);  //Declare here !!
};

class Circle : public Point{

private:
    int radius;
public:
    Circle(){radius=0;}
    void set_radius(int r) {radius = r;}
friend void print_circleRadius(Circle);
friend void print_circle(Circle);
};

class cylinder : public Point {
private:
    int radius;
public:
    cylinder(){radius=0;}
    void set_radius(int r) {radius=r;}
    friend void print_cylinderRadius(cylinder);
    friend void print_cylinder(cylinder);
};

void print(Point p){std::cout << "x= " << p.x << "y= " << p.y << std::endl;}

void print_circleRadius(Circle c) {std::cout << "Circle radius= " << c.radius << std::endl;}
void print_circle(Circle c) {std::cout << c.x << " " << c.y << std::endl;}

void print_cylinderRadius(cylinder x) {std::cout << "Cylinder radius= " << x.radius << std::endl;}
void print_cylinder(cylinder x) {std::cout << x.x << " " << x.y << std::endl;}


int main(){
    Point p;
    print(p);
    p.set_x(10);
    p.set_y(5);
    print(p);

    std::cout << std::endl;

    Circle c;
    print_circleRadius(c);
    c.set_radius(10);
    print_circleRadius(c);
    print_circle(c);
    c.set_x(20);
    c.set_y(25);
    print_circle(c);

    std::cout << std::endl;

    cylinder x;
    print_cylinderRadius(x);
    x.set_radius(100);
    print_cylinderRadius(x);
    print_cylinder(x);
    x.set_x(200);
    x.set_y(250);
    print_cylinder(x);
    std::cout << std::endl;


    return 0;
}
