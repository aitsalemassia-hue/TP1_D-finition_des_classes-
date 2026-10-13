#include <iostream>
#include "BankAccount.hpp"
int main (){
	// creation d'un compte
	//BankAccount compte;

	// saisir les informations
	std::string numero;
	double solde ;
	std::cout << "Donner le numero du compte ";
	std::cin >> numero ;
	std::cout << "Donner le le solde initial  ";
		std::cin >> solde ;

	 BankAccount compte(numero, solde);

	  int choix;
	  double montant;

	    do {
	        std::cout << "1. Afficher le compte\n";
	        std::cout << "2. Deposer de l'argent\n";
	        std::cout << "3. Retirer de l'argent\n";
	        std::cout << "4. Afficher le solde\n";
	        std::cout << "0. Quitter\n";
	        std::cout << "Votre choix (1,2,3,4,0): ";
	        std::cin >> choix;

	        switch (choix) {
	            case 1:
	                compte.afficher();
	                break;

	            case 2:
	                std::cout << "Montant a deposer : ";
	                std::cin >> montant;
	                compte.deposer(montant);
	                break;

	            case 3:
	                std::cout << "Montant a retirer : ";
	                std::cin >> montant;
	                compte.retirer(montant);
	                break;

	            case 4:
	                std::cout << "Solde actuel : "
	                          << compte.getSolde() << " euros\n";
	                break;

	            case 0:
	                std::cout << "Au revoir !\n";
	                break;

	            default:
	                std::cout << "Choix invalide !\n";
	        }

	    } while (choix != 0);

	    return 0;



}




