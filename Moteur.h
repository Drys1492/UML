#include <string>



class Moteur
{


private:

	std::string puissance;




protected:




public:

	Moteur();
	~Moteur();
	Moteur(const Moteur& entre);
	Moteur& operator = (const Moteur& entre);

	std::string getPuissance();
	void setPuissance(puissance);



};

#endif