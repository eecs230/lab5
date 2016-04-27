#include "vector2d.h"
/*
 * Lab 5 EXAMPLE Solutions
 */

Vector2d::Vector2d()
        : x_{0}, y_{0}
{ }

Vector2d::Vector2d(double x, double y)
        : x_{x}, y_{y}
{ }

// getters: return the value of member variables x and y
double Vector2d::get_x() const { //const indicates that the function cannot change the object it is called from
    return x_;
}

double Vector2d::get_y() const {
    return y_;
}

// setters: set the value of member variables x and y
void Vector2d::set_x(double x) {
    x_ = x;
}

void Vector2d::set_y(double y) {
    y_ = y;
}

Vector2d add(const Vector2d& a, const Vector2d& b) { //const indicates that parameters that are const cannot be changed
    //Implement Here.
    return Vector2d((a.get_x() + b.get_x()), (a.get_y() + b.get_y()));
}

Vector2d subtract(const Vector2d& a, const Vector2d& b) {
    //Implement Here.
    return Vector2d((a.get_x() - b.get_x()), (a.get_y() - b.get_y()));

}

bool operator==(const Vector2d& a, const Vector2d& b) {
    //Implement Here.
    if (a.get_x() == b.get_x() && a.get_y() == b.get_y())
        return true;
    else
        return false;

}

std::ostream& operator<<(std::ostream& os, const Vector2d& v)
{
    os << v.get_x() << " " << v.get_y() ;
}

// operator overloading of '+' and '-'
Vector2d operator+(const Vector2d& a, const Vector2d& b) {
    return add(a, b);
}

Vector2d operator-(const Vector2d& a, const Vector2d& b) {
    //return subtract(a, b);
    return Vector2d((a.get_x() - b.get_x()), (a.get_y() - b.get_y()));
}

bool operator>(const Vector2d& a, const Vector2d& b){
    return a.get_y() > b.get_y();
}