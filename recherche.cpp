#include <iostream>
using namespace std;

int main() {
    int n, valeurRecherchee, position = -1;

    // �tape 1 : Demandez la taille du tableau
    cout << "Entrez la taille du tableau : ";
    cin >> n;

    int tableau[n];

    // Remplissage du tableau
    cout << "Entrez les elements du tableau : " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << " : ";
        cin >> tableau[i];
    }

    // �tape 2 : Demandez une valeur � rechercher
    cout << "Entrez la valeur a rechercher : ";
    cin >> valeurRecherchee;

    // �tape 3 : Recherche de la valeur
    for (int i = 0; i < n; i++) {
        if (tableau[i] == valeurRecherchee) {
            position = i; // Stocker la position
            break;        // Arr�ter la recherche apr�s avoir trouv� la valeur
        }
    }

    // Affichage des r�sultats
    if (position != -1) {
        cout << "La valeur " << valeurRecherchee << " a ete trouvee a la position " << position + 1 << "." << endl;
    } else {
        cout << "La valeur " << valeurRecherchee << " n'est pas presente dans le tableau." << endl;
    }

    return 0;
}
