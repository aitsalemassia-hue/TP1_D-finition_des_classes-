

#include <iostream>
#include "Book.hpp"
#include "Library.hpp"

int main() {
    // 1. Création d'une bibliothèque
    Library bibliotheque;

    // 2. Création de deux livres
    Book livre1("Le Petit Prince", "Antoine de Saint-Exupery",
                "ISBN001", 1943);

    Book livre2("L'Etranger", "Albert Camus",
                "ISBN002", 1942);

    // 3. Ajouter les livres
    bibliotheque.ajouterLivre(livre1);
    bibliotheque.ajouterLivre(livre2);

    // 4. Afficher tous les livres
    std::cout << "\n--- Liste des livres ---\n";
    bibliotheque.listerLivres();

    // 5. Rechercher un livre par ISBN
    std::cout << "\n--- Recherche par ISBN ---\n";

    const Book* resultat =
        bibliotheque.trouverParISBN("ISBN001");

    if (resultat != nullptr) {
        std::cout << "Livre trouve :\n";
        resultat->afficher();
    } else {
        std::cout << "Livre introuvable.\n";
    }

    return 0;
}


