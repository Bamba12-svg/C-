#include <iostream>
using namespace std;

int main() {
    int n;

    // �tape 1 : Demandez la taille du tableau
    cout << "Entrez la taille du tableau : ";
    cin >> n;

    int tableau[n], tableauSansDoublons[n], k = 0;

    // Remplissage du tableau
    cout << "Entrez les elements du tableau : " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << " : ";
        cin >> tableau[i];
    }

    // �tape 2 : �liminer les doublons
    for (int i = 0; i < n; i++) {
        bool existeDeja = false;

        // V�rifier si l'�l�ment est d�j� dans le tableau sans doublons
        for (int j = 0; j < k; j++) {
            if (tableau[i] == tableauSansDoublons[j]) {
                existeDeja = true;
                break;
            }
        }

        // Si l'�l�ment n'est pas un doublon, l'ajouter au nouveau tableau
        if (!existeDeja) {
            tableauSansDoublons[k] = tableau[i];
            k++;
        }
    }

    // �tape 3 : Afficher le nouveau tableau sans doublons
    cout << "Le tableau sans doublons : ";
    for (int i = 0; i < k; i++) {
        cout << tableauSansDoublons[i] << " ";
    }
    cout << endl;

    return 0;
}
