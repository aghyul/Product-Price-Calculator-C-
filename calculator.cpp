#include <iostream>

/* This code was created By Zeldaus With ❤ and withut ☕ */

int main(int argc, char **argv)
{
	using namespace std;

	int ht, tva, ttc, pu, qte;

	cout << "Bonjour Cher Client " << endl;
	string pro;
	cout << "Veuillez Saisir le produit  " << endl;
	cin >> pro;
	cout << "Veuillez Saisir le Prix Unitaire " << endl;
	cin >> pu;
	cout << "Veuillez Saisir la Quantite :D " << endl;
	cin >> qte;
	ht = pu * qte;
	tva = ht * 19 / 100;
	ttc = ht + tva;
	cout << "Produit : " << pro << endl;
	cout << "Quantite Du " << pro << "est " << qte << endl;
	cout << "Le prix Unitaire est :" << pu << endl;
	cout << "Le Total est  :" << ttc << endl;

	system("PAUSE");
//	return EXIT_SUCCESS;
}

