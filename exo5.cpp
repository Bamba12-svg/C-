#include <iostream>
#include <array>
using namespace std;
int main() {
 array<int, 5> Lo;
 cout << "Entrez 5 elements :" << endl;
 for (int i = 0; i < 5; ++i) {
 cin >> Lo[i];
 }
 bool estTrie = true;
 for (int i = 0; i < 4; ++i) {
 if (Lo[i] > Lo[i + 1]) {
 estTrie = false;
 break;
 }
 }
 if (estTrie) {
 cout << "Le tableau est trie en ordre croissant." << endl;
 } else {
 cout << "Le tableau n'est pas trie en ordre croissant." << endl;
 }
 return 0;
}
