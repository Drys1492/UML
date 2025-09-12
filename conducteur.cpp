/*****************************************************************//**
 * \file   conducteur.h
 * \brief  Declaration de la classe conducteur
 * 
 * \author lenny
 * \date   Septembre 2025
 *********************************************************************/


#include <iostream>
#include <string>
#include "conducteur.h"



Conducteur::Conducteur() {

	std::cout << "conducteur" << std::endl;
}

Conducteur::~Conducteur() {

	std::cout << "aurevoir_conducteur" << std::endl;;
}


std::string Conducteur::getNom()
{
	return std::string();
}

std::string Conducteur::gePrenom()
{
	return std::string();
}

std::string Conducteur::getAnneeNaissance()
{
	return std::string();
}
