
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


    int maax = tableau[0];
    int miin = tableau[0];
    int posMax = 0;
    int posMin = 0;


    for (int i = 1; i < n; i++) {
        if (tableau[i] > maax) {
            maax = tableau[i];
            posMax = i;
        }
        if (tableau[i] < miin) {
            miin = tableau[i];
            posMin = i;
        }
    }


    cout << "Le maximum est : " << maax << " a la position " << posMax + 1 << endl;
    cout << "Le minimum est : " << miin << " a la position " << posMin + 1 << endl;

    return 0;
}
