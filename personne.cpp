#include <iostream>
#include <string>
using namespace std;

class Personne {
private:
    string nom;
    int age;

public:
    // Constructeur
    Personne(string n, int a) {
        nom = n;
        age = a;
    }

    // Méthode
    void afficher() {
        cout << "Nom : " << nom << endl;
        cout << "Age : " << age << endl;
    }
};

int main() {
    Personne p1("Oussama", 22);
    p1.afficher();
    return 0;
}
