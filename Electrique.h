/**************************************************//*
* \file Electrique.h
* \brief Declaration de la classe electrique
* 
* \author Drystan
* \date Septembre 2025
***************************************************/

#ifndef Electrique_H
#define Electrique_H
#include <iostream>
#include <string>
#include "Electrique.h"


class Electrique
{


private:
    std::string tensionMax;

    




protected:




public:
    Electrique();
    ~Electrique();
    Electrique(const Electrique& entre);
    Electrique& operator = (const Electrique& entre);


    std::string getTensionMax();
    

    std::string setTensionMax(std::string puissance);
    void setTensionMax();
    



};

#endif