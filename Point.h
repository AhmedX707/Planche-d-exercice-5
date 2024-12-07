//
// Created by Asus on 07/12/2024.
//

#ifndef POINT_H
#define POINT_H
#include<bits/stdc++.h>
using namespace std;
class Point {
private:
    double x,y;
public:
    Point(double px = 0, double py = 0);
    Point(const Point& other);
    void affiche() const;
    friend bool comparer(const Point& p1, const Point& p2);
    friend double distance(const Point& p1, const Point& p2);
    friend Point milieu(const Point& p1, const Point& p2);
};



#endif //POINT_H
