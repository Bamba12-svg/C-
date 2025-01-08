#include <iostream>
using namespace std;

int main() {
    int n;

    // �tape 1 : Demander � l'utilisateur de remplir un tableau
    cout << "Entrez la taille du tableau : ";
    cin >> n;

    int tableau[n];

    // Saisie des �l�ments du tableau
    cout << "Entrez les elements du tableau : " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << " : ";
        cin >> tableau[i];
    }

    // �tape 2 : V�rifier si le tableau est tri�
    bool croissant = true;
    bool decroissant = true;

    for (int i = 0; i < n - 1; i++) {
        if (tableau[i] > tableau[i + 1]) {
            croissant = false;
        }
        if (tableau[i] < tableau[i + 1]) {
            decroissant = false;
        }
    }

    // �tape 3 : Afficher le r�sultat de la v�rification
    if (croissant) {
        cout << "Le tableau est trie dans l'ordre croissant." << endl;
    } else if (decroissant) {
        cout << "Le tableau est trie dans l'ordre decroissant." << endl;
    } else {
        cout << "Le tableau n'est pas trie." << endl;
    }

    return 0;
}
