/*****************************************************************//**
 * \file   moto.h
 * \brief  Declaration de la classe moto
 * 
 * \author Pierre
 * \date   June 2023
 *********************************************************************/

#ifndef moto_H
#define moto_H
#include <iostream>
#include <string>



class Moto
{

    private:
  
        int Poids;

        std::string Moteur;

    protected : 



    public:
        Moto();
        ~Moto();
        std::string getPoids();
        void setPoids(std::string deux_cent);
        std::string getMoteur();
        void setMoteur(std::string quatre_cylindres);
        


       
};

#endif