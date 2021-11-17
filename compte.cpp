#include "compte.h"
#include <iostream>
using namespace std;
using namespace Banque;
bool Compte::retireArgent(double montant) {
	if (solde >= montant) {
		solde = solde - montant;
		return true;
	}
	else
		return false;
}
void Compte::deposerArgent(double montant) {
	this->solde = solde + montant;
}
void   Compte::consulterSolde() {
	cout << "solde est:" << solde << endl;
}