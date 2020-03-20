#pragma once
#ifndef LAB1
#define LAB1
#include <vector>

namespace lab1{

	/*
	Uebung 2a.
	Gibt die ersten n Primzahlen in einem Vektor.
	Parameter: n - integer
	*/
	std::vector<int> prim_array(int n);

	/*
	Uebung 2b.
	Gibt den laengsten zusammenhaengenden Sequenz von fallenden Zahlen in einem Vektor zurueck.
	Paramter: vektor - vector
	*/
	std::vector<int> laengste_untervektor(std::vector<int> vektor);

	/*
	Uebung 11a.
	GIbt die ersten n Paare von Zwillingszahlen in einem Vektor zurueck.
	Parameter: n - integer
	*/
	std::vector<int> twin_array(int n);

	/*
	Uebung 11b.
	Gibt den laengsten zusammenhaengenden Sequenz von relativ primen Zahlen in einem Vektor zurueck.
	Paramter: vektor - vector
	*/
	std::vector<int> relativ_prim_array(std::vector<int> vektor);

}

#endif 