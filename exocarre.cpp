#include <iostream>
using namespace std;

int main() {
    int n;

    // Saisie de la taille du carr�
    cout << "Entrez la taille du carre : ";
    cin >> n;

    // Carr� plein
    cout << "\nCarr� plein :\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Carr� creux
    cout << "\nCarr� creux :\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

