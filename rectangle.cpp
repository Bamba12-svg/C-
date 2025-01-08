#include <iostream>
using namespace std;

int main() {
    int hauteur;

    // Saisie de la hauteur du triangle rectangle
    cout << "Entrez la hauteur du triangle rectangle : ";
    cin >> hauteur;

    // Affichage du triangle rectangle
    for (int i = 1; i <= hauteur; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

