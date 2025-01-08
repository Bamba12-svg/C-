#include <iostream>
using namespace std;

int main() {
    int hauteur;

    // Saisie de la hauteur du triangle isocèle
    cout << "Entrez la hauteur du triangle isocèle : ";
    cin >> hauteur;

    // Affichage du triangle isocèle
    for (int i = 1; i <= hauteur; i++) {
        // Espaces
        for (int j = i; j < hauteur; j++) {
            cout << " ";
        }
        // Étoiles
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

