
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


    int sommePairs = 0, sommeImpairs = 0, countImpairs = 0;

    for (int i = 0; i < n; i++) {
        if (tableau[i] % 2 == 0) {
            sommePairs += tableau[i];
        } else {
            sommeImpairs += tableau[i];
            countImpairs++;
        }
    }


    float moyenneImpairs = (countImpairs > 0) ? (float)sommeImpairs / countImpairs : 0;


    cout << "La somme des nombres pairs est : " << sommePairs << endl;
    if (countImpairs > 0) {
        cout << "La moyenne des nombres impairs est : " << moyenneImpairs << endl;
    } else {
        cout << "Il n'y a pas de nombres impairs dans le tableau." << endl;
    }

    return 0;
}
