#include <iostream>
using namespace std;

int main() {
    int n;

    // Saisie de la hauteur du triangle
    cout << "Entrez la hauteur du triangle : ";
    cin >> n;

    // Triangle plein
    cout << "\nTriangle plein :\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Triangle inversé
    cout << "\nTriangle inversé :\n";
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

