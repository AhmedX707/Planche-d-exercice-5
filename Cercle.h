#ifndef CERCLE_H
#define CERCLE_H
#include "Pointex5.h"
class Cercle {
private:
    double rayon;
    Pointex5 centre;
public:
    Cercle(double r = 1, const Pointex5 &c = Pointex5(0, 0));
    Cercle(double r, double cx, double cy);
    double getRayon() const;
    Pointex5 getCentre() const;
    void setRayon(double r);
    void deplacer(double dx, double dy);
    double surface() const;
    double perimetre() const;
    bool appartient(const Pointex5 &p) const;
    bool egal(const Cercle &c) const;
    void afficher() const;
};

#endif
