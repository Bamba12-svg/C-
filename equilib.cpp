#include <iostream>
using namespace std;

int main() {
    int n;


    cout << "Entrez la taille du tableau : ";
    cin >> n;

    int tableau[n];
    int sommeTotale = 0;

    cout << "Entrez les éléments du tableau : " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << " : ";
        cin >> tableau[i];
        sommeTotale += tableau[i];
    }


    if (sommeTotale % 2 != 0) {
        cout << "Non" << endl;
        return 0;
    }

    int target = sommeTotale / 2;
    int dp[target + 1];


    for (int i = 0; i <= target; i++) {
        dp[i] = 0;
    }
    dp[0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = target; j >= tableau[i]; j--) {
            if (dp[j - tableau[i]] == 1) {
                dp[j] = 1;
            }
        }
    }


    if (dp[target] == 1) {
        cout << "Oui" << endl;
    } else {
        cout << "Non" << endl;
    }

    return 0;
}
