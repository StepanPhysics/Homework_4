#pragma once
#include "Painter.hpp"
#include "Point.hpp"
#include "Velocity.hpp"

class Ball {
public:
    void setVelocity(const Velocity& velocity);
    Velocity getVelocity() const;
    void draw(Painter& painter) const;
    void setCenter(const Point& center);
    Point getCenter() const;
    double getRadius() const;
    double getMass() const;

    Ball(Point center, Point velocity, double radius, Color color,
         bool isCollidable)
        : center(center), velocity(velocity), radius(radius), color(color),
          isCollidable(isCollidable) {}

  private:
    Velocity velocity; // ������ �������� �������
    Point center;      // ������ ����� �������
    double radius;     // ������ �������
    double mass;       // ����� �������
    Color color;
    bool isCollidable;
};
