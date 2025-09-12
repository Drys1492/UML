/*****************************************************************//**
 * \file   conducteur.h
 * \brief  Declaration de la classe conducteur
 * 
 * \author Pierre
 * \date   June 2023
 *********************************************************************/

#ifndef conducteur_H
#define conducteur_H
#include <iostream>
#include <string>



class Conducteur
{

private:

    std::string NomConducteur;

    std::string PrenomConducteur;

    std::string AnneeNaissance;

    std::string MesMoto;


protected:



public:
    Conducteur();
    ~Conducteur();
    std::string getNom();
    std::string gePrenom();
    std::string getAnneeNaissance();
};

#endif