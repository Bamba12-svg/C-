#include <iostream>
using namespace std;

int main() {
    int n;
    float somme = 0.0, moyenne;

    // �tape 1 : Demandez la taille du tableau
    cout << "Entrez la taille du tableau : ";
    cin >> n;

    float tableau[n];

    // �tape 2 : Saisissez les �l�ments du tableau
    cout << "Entrez les elements du tableau : " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << " : ";
        cin >> tableau[i];
        somme += tableau[i];  // Additionner les �l�ments � la somme
    }

    // �tape 3 : Calculer et afficher la moyenne
    moyenne = somme / n;
    cout << "La moyenne des elements du tableau est : " << moyenne << endl;

    return 0;
}
