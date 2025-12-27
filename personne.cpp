#include "personne.h"
#include <iostream>
using namespace std;

// Constructeur
Personne::Personne(string n, int a) {
    nom = n;
    age = a;
}

// Méthode afficher
void Personne::afficher() {
    cout << "Nom : " << nom << endl;
    cout << "Age : " << age << endl;
}
