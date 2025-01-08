
using namespace std;

int main() {
    int n, vre,cpt;


    cout << "Entrez la taille du tableau : ";
    cin >> n;

    int tableau[n];


    cout << "Entrez les elements du tableau : " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << " : ";
        cin >> tableau[i];
    }


    cout << "Entrez la valeur a rechercher : ";
    cin >> vre;


    for (int i = 0; i < n; i++) {
        if (tableau[i] == vre) {
            cpt++;

        }
    }

    if(cpt>=0){

        cout << "la valeur " << vre << " a ete trouvee " << cpt << " fois" << endl;
    } else {
        cout << "La valeur " << vre << " n'est pas presente dans le tableau." << endl;
    }

    return 0;
}
