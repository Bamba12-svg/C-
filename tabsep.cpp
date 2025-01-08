#include <iostream>
using namespace std;

int main() {
    int n;

    // Saisie de la taille du tableau principal
    cout << "Entrez la taille du tableau : ";
    cin >> n;

    int tableau[n], pairs[n], impairs[n];
    int indexPairs = 0, indexImpairs = 0;

    // Remplissage du tableau principal
    cout << "Entrez les elements du tableau : " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << " : ";
        cin >> tableau[i];
    }

    // Séparation en nombres pairs et impairs
    for (int i = 0; i < n; i++) {
        if (tableau[i] % 2 == 0) {
            pairs[indexPairs++] = tableau[i]; // Ajouter aux pairs
        } else {
            impairs[indexImpairs++] = tableau[i]; // Ajouter aux impairs
        }
    }

    // Affichage des tableaux séparés
    cout << "Tableau des nombres pairs : ";
    for (int i = 0; i < indexPairs; i++) {
        cout << pairs[i] << " ";
    }
    cout << endl;

    cout << "Tableau des nombres impairs : ";
    for (int i = 0; i < indexImpairs; i++) {
        cout << impairs[i] << " ";
    }
    cout << endl;

    return 0;
}
