/*************************************************************************//**
* \file Electrique.cpp
* \brief Definition de la classe Electrique
* 
* 
* \author Drystan
* \version 0.1
* date Septembre 2025
* 
* Programme CPP permettant de creer des objet pour decrir le moteur electrique
*****************************************************************************/

#include "Electrique.h"
#include "UML.cpp"

using namespace std;

Electrique::Electrique(){

	this->tensionMaxMax = "5V";

	}




/**
* \brief Constructeur 

*/
Electrique::Electrique() {


	std::cout << "Construteur" << std::endl;
}


/**
* \brief Destructeur 

*/
Electrique::~Electrique() {

	std::cout << "Destructeur" << std::endl;
}