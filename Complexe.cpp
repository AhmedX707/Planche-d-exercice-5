#include "Complexe.h"
#include<bits/stdc++.h>
using namespace std;
Complexe::Complexe(double r, double i) : Re(r),Img(i){}

void Complexe::afficher() const {
    cout<<Re<<(Img >= 0 ? " + " : " - ")<<fabs(Img)<<"i"<<endl;
}
double Complexe::module() const {
    return sqrt(Re*Re+Img*Img);
}
Complexe Complexe::conjugue() const {
    return Complexe(Re,-Img);
}
Complexe Complexe::operator+(const Complexe &c) const {
    return Complexe(Re+c.Re,Img+c.Img);
}
Complexe Complexe::operator+(double r) const {
    return Complexe(Re+r,Img);
}
Complexe operator+(double r, const Complexe &c) {
    return Complexe(c.Re+r,c.Img);
}
Complexe Complexe::operator*(const Complexe &c) const {
    return Complexe(Re*c.Re-Img*c.Img,Re*c.Img+Img* c.Re);
}
Complexe Complexe::operator*(double r) const {
    return Complexe(Re * r, Img * r);
}
Complexe operator*(double r, const Complexe &c) {
    return Complexe(c.Re * r, c.Img * r);
}
Complexe Complexe::operator-(const Complexe &c) const {
    return Complexe(Re - c.Re, Img - c.Img);
}
Complexe Complexe::operator-(double r) const {
    return Complexe(Re-r,Img);
}
Complexe operator-(double r, const Complexe &c) {
    return Complexe(r-c.Re,-c.Img);
}
