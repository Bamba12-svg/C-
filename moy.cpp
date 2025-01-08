#include <iostream>
using namespace std;

int main() {
    int n;
    float somme = 0.0, moyenne;

    // Étape 1 : Demandez la taille du tableau
    cout << "Entrez la taille du tableau : ";
    cin >> n;

    float tableau[n];

    // Étape 2 : Saisissez les éléments du tableau
    cout << "Entrez les elements du tableau : " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << " : ";
        cin >> tableau[i];
        somme += tableau[i];  // Additionner les éléments à la somme
    }

    // Étape 3 : Calculer et afficher la moyenne
    moyenne = somme / n;
    cout << "La moyenne des elements du tableau est : " << moyenne << endl;

    return 0;
}
