#include <iostream>
using namespace std;

int main() {
    int n, positions;
    char direction;

    // �tape 1 : Demander la taille du tableau
    cout << "Entrez la taille du tableau : ";
    cin >> n;

    int tableau[n];

    // Saisie des �l�ments du tableau
    cout << "Entrez les elements du tableau : " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << " : ";
        cin >> tableau[i];
    }

    // �tape 2 : Demander le nombre de positions et la direction
    cout << "Entrez le nombre de positions pour la rotation : ";
    cin >> positions;
    cout << "Entrez la direction de la rotation (G pour gauche, D pour droite) : ";
    cin >> direction;

    // Effectuer la rotation � gauche
    if (direction == 'G' || direction == 'g') {
        for (int i = 0; i < positions; i++) {
            int temp = tableau[0];
            // D�calage des �l�ments vers la gauche
            for (int j = 0; j < n - 1; j++) {
                tableau[j] = tableau[j + 1];
            }
            tableau[n - 1] = temp;  // Le premier �l�ment va � la fin
        }
    }
    // Effectuer la rotation � droite
    else if (direction == 'D' || direction == 'd') {
        for (int i = 0; i < positions; i++) {
            int temp = tableau[n - 1];
            // D�calage des �l�ments vers la droite
            for (int j = n - 1; j > 0; j--) {
                tableau[j] = tableau[j - 1];
            }
            tableau[0] = temp;  // Le dernier �l�ment va au d�but
        }
    } else {
        cout << "Direction invalide !" << endl;
        return 1;
    }

    // �tape 3 : Afficher le tableau apr�s rotation
    cout << "Le tableau apres la rotation : ";
    for (int i = 0; i < n; i++) {
        cout << tableau[i] << " ";
    }
    cout << endl;

    return 0;
}
