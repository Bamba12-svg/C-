#include <iostream>
#include <map>
#include <list>
#include <string>

using namespace std;


void ajouterNumero(map<string, list<string>>& annuaire, const string& nom, const string& numero) {
    annuaire[nom].push_back(numero);
}


void ajouterNom(map<string, list<string>>& annuaire, const string& nom, const string& numero) {
    if (annuaire.find(nom) == annuaire.end()) {
        annuaire[nom].push_back(nom);
    } else {
        cout << "Le nom existe déja\n";
    }
}

void trouverNumeros(const map<string, list<string>>& annuaire, const string& nom) {
    auto it = annuaire.find(nom);
    if (it != annuaire.end()) {
        cout << "Numeros associes a " << nom << " : ";
        for (const string& numero : it->second) {
            cout << numero << " ";
        }
        cout << endl;
    } else {
        cout << "Nom non trouve dans l'annuaire.\n";
    }
}


void supprimerNumero(map<string, list<string>>& annuaire, const string& nom, const string& numero) {
    auto it = annuaire.find(nom);
    if (it != annuaire.end()) {
        it->second.remove(numero);
        if (it->second.empty()) {
            annuaire.erase(it);
        }
        cout << "Numero supprime avec succes.\n";
    } else {
        cout << "Nom non trouve dans l'annuaire.\n";
    }
}


void supprimerNom(map<string, list<string>>& annuaire, const string& nom) {
    if (annuaire.erase(nom)) {
        cout << "Nom et tous les numeros associes ont ete supprimes.\n";
    } else {
        cout << "Nom non trouve dans l'annuaire.\n";
    }
}


int main() {
    map<string, list<string>> annuaire;


    ajouterNom(annuaire, "Bamba", "782947710");
    ajouterNom(annuaire, "Khadim", "765919087");
    ajouterNumero(annuaire, "BKTD", "777654321");


    trouverNumeros(annuaire, "Bamba");


    supprimerNumero(annuaire, "BKTD", "777654321");
    trouverNumeros(annuaire, "BKTD");


    supprimerNom(annuaire, "Khadim");
    trouverNumeros(annuaire, "Khadim");

    return 0;
}
