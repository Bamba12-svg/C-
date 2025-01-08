#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    // Saisie des tailles des deux tableaux
    cout << "Entrez la taille du premier tableau : ";
    cin >> n1;
    cout << "Entrez la taille du second tableau : ";
    cin >> n2;

    int tableau1[n1], tableau2[n2], tableauFusion[n1 + n2];

    // Remplissage du premier tableau
    cout << "Entrez les elements du premier tableau : " << endl;
    for (int i = 0; i < n1; i++) {
        cout << "Element " << i + 1 << " : ";
        cin >> tableau1[i];
    }

    // Remplissage du second tableau
    cout << "Entrez les elements du second tableau : " << endl;
    for (int i = 0; i < n2; i++) {
        cout << "Element " << i + 1 << " : ";
        cin >> tableau2[i];
    }

    // Fusion des deux tableaux
    for (int i = 0; i < n1; i++) {
        tableauFusion[i] = tableau1[i];
    }
    for (int i = 0; i < n2; i++) {
        tableauFusion[n1 + i] = tableau2[i];
    }

    // Affichage du tableau fusionné
    cout << "Tableau fusionne : ";
    for (int i = 0; i < n1 + n2; i++) {
        cout << tableauFusion[i] << " ";
    }
    cout << endl;

    return 0;
}
