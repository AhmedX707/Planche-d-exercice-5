#include "Cercle.h"
#include<bits/stdc++.h>
using namespace std;
int main() {
    Cercle c1(1,Pointex5(10, 10));
    cout<<"Cercle initial:"<<endl;
    c1.afficher();
    cout<<"Périmètre: "<<c1.perimetre()<<endl;
    cout<<"Surface: "<<c1.surface()<<endl;
    c1.setRayon(2);
    cout<<"Cercle après doublement du rayon:"<<endl;
    c1.afficher();
    c1.deplacer(-10,-10);
    cout<<"Cercle déplacé à l'origine:"<<endl;
    c1.afficher();
    Pointex5 p1(1, 1), p2(3, 3);
    cout<<"Point (1,1) appartient au cercle: "<<c1.appartient(p1)<<endl;
    cout<<"Point (3,3) appartient au cercle: "<<c1.appartient(p2)<<endl;
    Cercle c2(2, 0, 0);
    cout<<"Cercle égal à un autre cercle de centre (0,0) et rayon 2: "<<c1.egal(c2)<<endl;
    return 0;
}
