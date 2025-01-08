#include <iostream>
using namespace std;

int main() {
    int n;


    cout << "Entrez la taille du tableau : ";
    cin >> n;

    int tableau[n];


    cout << "Entrez les éléments du tableau : " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << " : ";
        cin >> tableau[i];
    }


    int somme = 0;
    for (int i = 0; i < n; i++) {
        somme += tableau[i];
    }

    // Afficher la somme
    cout << "La somme des éléments du tableau est : " << somme << endl;

    return 0;
}
