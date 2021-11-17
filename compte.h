#pragma once
namespace Banque {
	class Compte {
	private:
		int numcompte;
		char* nomPropritaire;
		double solde;
	public:
		bool retireArgent(double montant);
		void deposerArgent(double montant);
		void consulterSolde();
		void transferArgent(double somme, comptee);
	};
};
