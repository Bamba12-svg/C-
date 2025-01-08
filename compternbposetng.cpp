#include <iostream>
using namespace std;

int main() {
    int n;

    // �tape 1 : Demandez la taille du tableau
    cout << "Entrez la taille du tableau : ";
    cin >> n;

    int tableau[n];
    int countPositifs = 0, countNegatifs = 0;

    // �tape 2 : Saisissez les �l�ments du tableau
    cout << "Entrez les elements du tableau : " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << " : ";
        cin >> tableau[i];

        // �tape 3 : V�rification de la nature de chaque �l�ment
        if (tableau[i] > 0) {
            countPositifs++;
        } else if (tableau[i] < 0) {
            countNegatifs++;
        }
    }

    // Afficher le r�sultat
    cout << "Nombre d'elements positifs : " << countPositifs << endl;
    cout << "Nombre d'elements negatifs : " << countNegatifs << endl;

    return 0;
}
