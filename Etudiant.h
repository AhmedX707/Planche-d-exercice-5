//
// Created by Asus on
#include<bits/stdc++.h>
using namespace std;
#ifndef ETUDIANT_H
#define ETUDIANT_H
class Etudiant {
    public:
        Etudiant(int n ,string nm,int t);
        Etudiant();
        Etudiant (Etudiant& autre);
        ~Etudiant();
        int getMatriclule();
        string getNom();
        int getNbnot();
        void setNom(string &n);
        void saisir();
        void aff();
        float moy();
        bool admis();
        static bool comp(Etudiant &e1,Etudiant &e2);
    private:
        static int nmatricule;
        static int matricule;
        string nom;
        int nbnot;
        double* tabnot;;
};

#endif //ETUDIANT_H
