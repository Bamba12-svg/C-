#include <iostream>
using namespace std;

int main() {
    int n;


    cout << "Entrez la taille du tableau : ";
    cin >> n;

    int tableau[n];


    cout << "Entrez les elements du tableau : " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << " : ";
        cin >> tableau[i];
    }


    int maax = tableau[0];
    for (int i = 1; i < n; i++) {
        if (tableau[i] > maax) {
            maax = tableau[i];
        }
    }


    cout << "L'element le plus grand du tableau est : " << maax << endl;

    return 0;
}
