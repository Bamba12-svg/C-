#include <iostream>
#include <array>
using namespace std;
int main() {
 array<int, 5> monArray;
 for (int i = 0; i < 5; i++) {
 cout << "Entrez l'element " << (i + 1) << ": ";
 cin >> monArray[i];
 }
 cout << "\nVous avez saisi les elements suivants: ";
 for (int i = 0; i < 5; i++) {
 cout << monArray[i] << " ";
 }
 cout << endl;
 return 0;
}
