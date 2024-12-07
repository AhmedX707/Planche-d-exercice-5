#include <bits/stdc++.h>
using namespace std;

#include "Vecteur3d.h"

Vecteur3d::Vecteur3d() : x(0), y(0), z(0) {}
void Vecteur3d::aff() const {
    cout << "(" << x << ", " << y << ", " << z << ")" << endl;
}
float Vecteur3d::som(Vecteur3d &v) {
    return x + v.x + y + v.y + z + v.z;
}
double Vecteur3d::ps(Vecteur3d &v) {
    return x * v.x + y * v.y + z * v.z;
}
bool Vecteur3d::cp(Vecteur3d &v) {
    return (x == v.x && y == v.y && z == v.z);
}
double Vecteur3d::norme() {
    return sqrt(x * x + y * y + z * z);
}
Vecteur3d Vecteur3d::normaxValeur(const Vecteur3d &v) const {
    return (this->norme() >= v.norme()) ? *this : v;
}
const Vecteur3d* Vecteur3d::normaxAdresse(const Vecteur3d *v) const {
    return (this->norme() >= v->norme()) ? this : v;
}
const Vecteur3d& Vecteur3d::normaxReference(const Vecteur3d &v) const {
    return (this->norme() >= v.norme()) ? *this : v;
}
