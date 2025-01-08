#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
 map<int, string> maMap = {{1, "un"}, {2, "deux"},
{3, "trois"}};
 int cle;
 cout << "Entrez la clé de l'élément à supprimer: ";
 cin >> cle;
maMap.erase(cle); // Suppression directe
 cout << "\nMap après suppression:" << endl;
 for (const auto &pair : maMap) {
 cout << pair.first << ": " << pair.second << endl;
 }
 return 0;
}
