#include <iostream>
using namespace std;

int main() {
    int n;

    // Saisie de la hauteur de la pyramide
    cout << "Entrez la hauteur de la pyramide : ";
    cin >> n;

    // Affichage de la pyramide
    for (int i = 1; i <= n; i++) {
        // Espaces avant les étoiles
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        // Étoiles
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

