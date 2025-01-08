#include <iostream>
using namespace std;

int main() {
    int taille;

    // Saisir la taille du tableau
    cout << "Entrez la taille du tableau : ";
    cin >> taille;

    int tableau[taille];

    // Saisie des �l�ments du tableau
    cout << "Entrez les elements du tableau : " << endl;
    for (int i = 0; i < taille; i++) {
        cout << "Element " << i + 1 << " : ";
        cin >> tableau[i];
    }

    // Saisir la direction et le nombre de d�calages
    int decalage;
    char direction;
    cout << "Entrez le nombre de decalages : ";
    cin >> decalage;
    cout << "Entrez la direction (d pour droite, g pour gauche) : ";
    cin >> direction;

    // R�aliser le d�calage cyclique
    for (int d = 0; d < decalage; d++) {
        if (direction == 'd') {
            // D�calage vers la droite
            int dernier = tableau[taille - 1];
            for (int i = taille - 1; i > 0; i--) {
                tableau[i] = tableau[i - 1];
            }
            tableau[0] = dernier;
        } else if (direction == 'g') {
            // D�calage vers la gauche
            int premier = tableau[0];
            for (int i = 0; i < taille - 1; i++) {
                tableau[i] = tableau[i + 1];
            }
            tableau[taille - 1] = premier;
        }
    }

    // Afficher le tableau apr�s d�calage
    cout << "Tableau apres le decalage : ";
    for (int i = 0; i < taille; i++) {
        cout << tableau[i] << " ";
    }
    cout << endl;

    return 0;
}
