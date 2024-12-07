

#include "Etudiant.h"
#include<bits/stdc++.h>
using namespace std;
int Etudiant:: nmatricule=1;
Etudiant :: Etudiant(int n ,string nm,int t) {
    matricule=n;
    nom=nm;
    nbnot=t;
    for (int i = 0; i < nbnot; i++) {
        tabnot[i] = 0;
    }
}
Etudiant ::Etudiant() {
    this->matricule=nmatricule++;
    this->nom="";
    this->nbnot=0;
    for (int i = 0; i < nbnot; i++) {
        tabnot[i] = 0;
    }
}
Etudiant::Etudiant (Etudiant& autre) {
    this->matricule=autre.matricule;
    this->nom=autre.nom;
    this->nbnot=autre.nbnot;
    for (int i = 0; i<nbnot; ++i) {
        tabnot[i] = autre.tabnot[i];
    }
}
Etudiant::~Etudiant() {
    delete[] tabnot;}
int Etudiant::getMatriclule() {
    return Etudiant::matricule;}
string Etudiant::getNom() {
    return Etudiant::nom;
}
int Etudiant::getNbnot() {
    return Etudiant::nbnot;
}
void Etudiant::setNom(string &n) {
    Etudiant::nom=n;
}
void Etudiant::saisir() {
    cout << "Saisir les notes pour l'étudiant " << nom << " :\n";
    for (int i = 0; i < nbnot; i++) {
        cout << "Note " << i + 1 << ": ";
        cin >> tabnot[i];
    }
}
void Etudiant::aff() {
    cout<<"les donner de l'etudiant";
    cout<<"matricule:"<<matricule<<endl;
    cout<<"nom:"<<nom<<endl;
    cout<<"nbnot:"<<nbnot<<endl;
    cout<<"tabnot:"<<endl;
    for(auto i:tabnot) {
        cout<<i<<" ";
    }
}
float Etudiant::moy() {
    double x=0;
    for(auto i:tabnot) {
        x+=i;
    }
    return(x/nbnot);
}
bool Etudiant::admis() {
    return moy()>=10;
}
bool Etudiant::comp(Etudiant &e1,  Etudiant &e2) {
    return e1.moy()==e2.moy();
}









