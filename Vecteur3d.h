//
// Created by Asus on 06/12/2024.
//

#ifndef VECTEUR3D_H
#define VECTEUR3D_H
#include<bits/stdc++.h>
using namespace std;
class Vecteur3d {
    private:
    float x,y,z;
    public:
    Vecteur3d();
    void aff()const;
    float som(Vecteur3d &v);
    double ps(Vecteur3d &v);
    bool cp(Vecteur3d &v);
    double norme();
    Vecteur3d normaxValeur(const Vecteur3d &v) const;
    const Vecteur3d* normaxAdresse(const Vecteur3d *v) const;
    const Vecteur3d& normaxReference(const Vecteur3d &v) const;
};



#endif //VECTEUR3D_H
