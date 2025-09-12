/*****************************************************************//**
 * \file   moto.h
 * \brief  Declaration de la classe moto
 * 
 * \author Pierre
 * \date   June 2023
 *********************************************************************/


#include <iostream>
#include <string>
#include "moto.h"


Moto::Moto() {

	std::cout << "bonjour" << std::endl;
}

Moto::~Moto() {

	std::cout << "aurevoir";
}

std::string Moto::getPoids()
{
	return std::string();
}

void Moto::setPoids(std::string deux_cent)
{
}

std::string Moto::getMoteur()
{
	return std::string();
}

void Moto::setMoteur(std::string quatre_cylindres)
{
}
