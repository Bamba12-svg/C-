#include <iostream>
using namespace std;

int main() {
    int n;

    // Saisie de la taille du tableau
    cout << "Entrez la taille du tableau : ";
    cin >> n;

    int tableau1[n], tableau2[n];

    // Remplissage du premier tableau
    cout << "Entrez les elements du premier tableau : " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << " : ";
        cin >> tableau1[i];
    }

    // Transfert des éléments du premier tableau vers le second
    for (int i = 0; i < n; i++) {
        tableau2[i] = tableau1[i];
    }

    // Affichage du second tableau après transfert
    cout << "Tableau 2 apres transfert : ";
    for (int i = 0; i < n; i++) {
        cout << tableau2[i] << " ";
    }
    cout << endl;

    return 0;
}
