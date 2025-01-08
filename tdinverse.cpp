#include <iostream>
using namespace std;

int main() {
    int n;

    // Étape 1 : Demandez la taille du tableau
    cout << "Entrez la taille du tableau : ";
    cin >> n;

    int tableau[n];

    // Étape 2 : Saisissez les éléments du tableau
    cout << "Entrez les elements du tableau : " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << " : ";
        cin >> tableau[i];
    }

    // Étape 3 : Inverser l'ordre des éléments
    cout << "Tableau inverse : ";
    for (int i = n - 1; i >= 0; i--) {
        cout << tableau[i] << " ";
    }
    cout << endl;

    return 0;
}
