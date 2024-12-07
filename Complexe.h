#ifndef COMPLEXE_H
#define COMPLEXE_H
#include <bits/stdc++.h>
using namespace std;

class Complexe {
private:
    double Re, Img;

public:
    Complexe(double r = 0, double i = 0);
    void afficher() const;
    double module() const;
    Complexe conjugue() const;
    Complexe operator+(const Complexe &c) const;
    Complexe operator+(double r) const;
    friend Complexe operator+(double r, const Complexe &c);
    Complexe operator*(const Complexe &c) const;
    Complexe operator*(double r) const;
    friend Complexe operator*(double r, const Complexe &c);
    Complexe operator-(const Complexe &c) const;
    Complexe operator-(double r) const;
    friend Complexe operator-(double r, const Complexe &c);
};

#endif
