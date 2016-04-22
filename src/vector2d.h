#pragma once

#include <iostream>

// Represents a 2-dimensional vector from the origin to the point (x_, y_)
class Vector2d {
private:
    // data members - private, meaning accessible only via member functions
    double x_;
    double y_;

public:
    // constructors
    Vector2d(); //default constructor
    Vector2d(double x, double y);

    // getters:
    double get_x() const;
    double get_y() const;

    // setters:
    void set_x(double);
    void set_y(double);
};

// non-member functions
Vector2d add(const Vector2d&, const Vector2d&);
Vector2d subtract(const Vector2d&, const Vector2d&);

bool operator==(const Vector2d&, const Vector2d&);

std::ostream& operator<<(std::ostream&, const Vector2d&);

Vector2d operator+(const Vector2d&, const Vector2d&);
Vector2d operator-(const Vector2d&, const Vector2d&);
