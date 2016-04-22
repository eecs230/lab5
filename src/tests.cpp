#include "vector2d.h"

#include <iostream>
#include <UnitTest++/UnitTest++.h>

using namespace std;

TEST(Getters)
{
    Vector2d vec1, vec2(1, 2), vec3(3, 4);

    CHECK_EQUAL(0, vec1.get_x());
    CHECK_EQUAL(0, vec1.get_y());
    CHECK_EQUAL(1, vec2.get_x());
    CHECK_EQUAL(2, vec2.get_y());
    CHECK_EQUAL(3, vec3.get_x());
    CHECK_EQUAL(4, vec3.get_y());
}

TEST(Setters)
{
    Vector2d vec1, vec2(1, 2);

    vec1.set_x(5);
    vec1.set_y(6);
    CHECK_EQUAL(5, vec1.get_x());
    CHECK_EQUAL(6, vec1.get_y());
    CHECK_EQUAL(1, vec2.get_x());
    CHECK_EQUAL(2, vec2.get_y());
}

TEST(Equality)
{
    Vector2d vec1(3, 4), vec2(3, 4), vec3(5, 6);

    CHECK_EQUAL(true, vec1 == vec2);
    CHECK_EQUAL(false, vec1 == vec3);
    CHECK_EQUAL(false, vec2 == vec3);
}

TEST(StreamInsertion)
{
    std::ostringstream os;
    os << Vector2d(2, 3);
    CHECK_EQUAL("[2 3]", os.str());
}

TEST(Addition)
{
    using V = Vector2d;

    CHECK_EQUAL(V(3, 4), V(3, 0) + V(0, 4));
    CHECK_EQUAL(V(31, 48), V(30, 40) + V(1, 8));
}

TEST(Subtraction)
{
    using V = Vector2d;

    CHECK_EQUAL(V(0, 4), V(3, 4) - V(3, 0));
    CHECK_EQUAL(V(1, 8), V(31, 48) - V(30, 40));
}
