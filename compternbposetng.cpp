#include <iostream>
using namespace std;

int main() {
    int n;

    // Étape 1 : Demandez la taille du tableau
    cout << "Entrez la taille du tableau : ";
    cin >> n;

    int tableau[n];
    int countPositifs = 0, countNegatifs = 0;

    // Étape 2 : Saisissez les éléments du tableau
    cout << "Entrez les elements du tableau : " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << " : ";
        cin >> tableau[i];

        // Étape 3 : Vérification de la nature de chaque élément
        if (tableau[i] > 0) {
            countPositifs++;
        } else if (tableau[i] < 0) {
            countNegatifs++;
        }
    }

    // Afficher le résultat
    cout << "Nombre d'elements positifs : " << countPositifs << endl;
    cout << "Nombre d'elements negatifs : " << countNegatifs << endl;

    return 0;
}
