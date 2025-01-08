#include <iostream>
#include <list>

int main() {
    std::list<int> nb;
    int nombre, som = 0, maax, miin;

    std::cout << "Entrez des nombres entiers et 0 pour terminer : " << std::endl;
    std::cin >> nombre;

    if (nombre != 0) {
        maax = nombre;
        miin = nombre;
        while (nombre != 0) {
            nb.push_back(nombre);
            som+= nombre;
            if (nombre > maax){
                maax = nombre;
            }
            if (nombre < miin){
            } miin = nombre;
            std::cin >> nombre;
        }

        std::cout << "Nombres saisis : ";
        for (int n : nb) std::cout << n << " ";
        std::cout << std::endl;

        std::cout << "Somme des nombres : " << som << std::endl;

        std::cout << "Le plus grand nombre : " << maax << std::endl;
        std::cout << "Le plus petit nombre : " << miin << std::endl;
        std::cout << "Nombre de nombres saisis excluant le 0 : " << nb.size() << std::endl;
    } else {
        std::cout << "Aucun nombre saisi." << std::endl;
    }

    return 0;
}

