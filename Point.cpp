//
// Created by Asus on 07/12/2024.
//

#include "Point.h"
#include<bits/stdc++.h>
using namespace std;
Point::Point(double px, double py) : x(px),y(py){}
Point::Point(const Point& other) : x(other.x), y(other.y) {}
void Point::affiche() const {
    std::cout <<"Point("<<x<<", "<<y<<")"<<endl;
}
bool comparer(const Point& p1, const Point& p2) {
    return (p1.x == p2.x)&& (p1.y == p2.y);
}
double distance(const Point& p1,const Point& p2) {
    return std::sqrt(pow(p2.x - p1.x, 2)+pow(p2.y - p1.y, 2));
}
Point milieu(const Point& p1, const Point& p2) {
    return Point((p1.x+p2.x)/2,(p1.y+p2.y)/2);
}
