/**************************************************//*
* \file Thermique.h
* \brief Declaration de la classe Thermique
*
* \author Drystan
* \date Septembre 2025
***************************************************/


#ifndef Thermique_H
#define Thermique_H
#include <iostream>
#include <string>



class Thermique
{


private:

	std:: string cylindree



protected:




public:
	Thermique();
	~Thermique();
	Thermique(const Thermique& entre);
	Thermique &operator = (const Thermique& entre);

	std::string getCylindree();
	float getCylindree();
	std::string getCylindre();
	void setcylindree(std::string newCylindree);



};

#endif