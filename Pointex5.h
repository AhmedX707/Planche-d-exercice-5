#ifndef POINTEX5_H
#define POINTEX5_H
#include <bits/stdc++.h>
using namespace std;

class Pointex5 {
private:
    double x, y;

public:
    Pointex5(double px = 0, double py = 0);
    double getX() const;
    double getY() const;
    void setX(double px);
    void setY(double py);
    void deplacer(double dx, double dy);
    void afficher() const;
};

#endif
