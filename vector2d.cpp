#include "vector2d.h"

/*
 * Lab 5 EXAMPLE Solutions
 *
 */

// constructors
Vector2d::Vector2d() : _x{0}, _y{0} {}; //default constructor
Vector2d::Vector2d(double x, double y) : _x{x}, _y{y} {};

// getters: return the value of member variables x and y
double Vector2d::get_x() const { //const indicates that the function cannot change the object it is called from
    return _x;
}
double Vector2d::get_y() const {
    return _y;
}

// setters: set the value of member variables x and y
void Vector2d::set_x(double x) {
    _x = x;
}
void Vector2d::set_y(double y) {
    _y = y;
}

// helper function
Vector2d add(const Vector2d& a, const Vector2d& b) { //const indicates that parameters that are const cannot be changed
    return Vector2d(a.get_x()+b.get_x(), b.get_y()+a.get_y());
}

// helper function
Vector2d subtract(const Vector2d& a, const Vector2d& b) {
    return Vector2d(a.get_x()-b.get_x(), a.get_y()-b.get_y());
}

// operator overloading of '=='
bool operator==(const Vector2d& a, const Vector2d& b) {
    return (a.get_x()==b.get_x() && a.get_y()==b.get_y());
}


// operator overloading of '+' and '-'
Vector2d operator+(const Vector2d& a, const Vector2d& b) {
    return add(a,b);
}
Vector2d operator-(const Vector2d& a, const Vector2d& b) {
    return subtract(a,b);
}