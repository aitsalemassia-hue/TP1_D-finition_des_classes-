
#include "Library.hpp"
#include <iostream>

void Library::ajouterLivre(const Book& livre) {
    if (trouverParISBN(livre.getISBN()) != nullptr) {
        std::cerr << "ISBN deja existant.\n";
        return;
    }

    m_livres.push_back(livre);
    std::cout << "Livre ajoute.\n";
}

const Book* Library::trouverParISBN(
    const std::string& isbn) const {

    for (const auto& livre : m_livres) {
        if (livre.getISBN() == isbn) {
            return &livre;
        }
    }

    return nullptr;
}

void Library::listerLivres() const {
    if (m_livres.empty()) {
        std::cout << "Le catalogue est vide.\n";
        return;
    }

    for (const auto& livre : m_livres) {
        livre.afficher();
    }
}
