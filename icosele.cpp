#include <iostream>
using namespace std;

int main() {
    int hauteur;

    // Saisie de la hauteur du triangle isoc�le
    cout << "Entrez la hauteur du triangle isoc�le : ";
    cin >> hauteur;

    // Affichage du triangle isoc�le
    for (int i = 1; i <= hauteur; i++) {
        // Espaces
        for (int j = i; j < hauteur; j++) {
            cout << " ";
        }
        // �toiles
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

