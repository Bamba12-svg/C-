#include <iostream>
#include <map>
#include <list>
#include <numeric>
#include <string>

int main() {
    std::map<int, std::pair<std::string, std::list<float>>> notesEtudiants;

    // Ajouter un nouvel �tudiant
    notesEtudiants[1] = {"Jean Dupont", {}};
    std::cout << "�tudiant ajout�." << std::endl;

    // Ajouter des notes � un �tudiant
    notesEtudiants[1].second.push_back(15.5);
    notesEtudiants[1].second.push_back(12.0);

    // Ajouter un autre �tudiant
    notesEtudiants[2] = {"Marie Lef�vre", {}};
    notesEtudiants[2].second.push_back(18.0);

    // Calculer la moyenne des notes d'un �tudiant
    if (notesEtudiants.find(1) != notesEtudiants.end()) {
        float somme = 0.0f;
        for (const auto& note : notesEtudiants[1].second) {
            somme += note;
        }
        float moyenne = somme / notesEtudiants[1].second.size();
        std::cout << "Moyenne de " << notesEtudiants[1].first << ": " << moyenne << std::endl;
    }

    // Afficher toutes les notes d'un �tudiant
    auto it = notesEtudiants.find(1);
    if (it != notesEtudiants.end()) {
        std::cout << "Notes de " << it->second.first << " (ID " << 1 << "): ";
        for (const auto& note : it->second.second) {
            std::cout << note << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "�tudiant non trouv�." << std::endl;
    }

    // Mettre � jour une note sp�cifique d'un �tudiant
    int idEtudiant = 1;
    float ancienneNote = 12.0f, nouvelleNote = 14.0f;
    auto studentIt = notesEtudiants.find(idEtudiant);
    if (studentIt != notesEtudiants.end()) {
        auto& notes = studentIt->second.second;
        for (auto noteIt = notes.begin(); noteIt != notes.end(); ++noteIt) {
            if (*noteIt == ancienneNote) {
                *noteIt = nouvelleNote;
                std::cout << "Note mise � jour." << std::endl;
                break;
            }
        }
    } else {
        std::cout << "Impossible de mettre � jour la note." << std::endl;
    }

    // Afficher les notes apr�s mise � jour
    it = notesEtudiants.find(1);
    if (it != notesEtudiants.end()) {
        std::cout << "Notes de " << it->second.first << " apr�s mise � jour: ";
        for (const auto& note : it->second.second) {
            std::cout << note << " ";
        }
        std::cout << std::endl;
    }

    // Supprimer toutes les notes d'un �tudiant
    studentIt = notesEtudiants.find(1);
    if (studentIt != notesEtudiants.end()) {
        studentIt->second.second.clear();
    }

    // Afficher les notes apr�s suppression (devrait �tre vide)
    it = notesEtudiants.find(1);
    if (it != notesEtudiants.end()) {
        std::cout << "Notes de " << it->second.first << " apr�s suppression: ";
        for (const auto& note : it->second.second) {
            std::cout << note << " ";
        }
        std::cout << std::endl;
    }

    // Supprimer un �tudiant
    int eraseCount = notesEtudiants.erase(2);
    std::cout << (eraseCount > 0 ? "�tudiant supprim�." : "�tudiant non trouv� pour suppression.") << std::endl;

    return 0;
}
