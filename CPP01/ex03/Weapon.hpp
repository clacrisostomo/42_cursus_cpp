#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

class Weapon{

	private:

		std::string _type;

	public:

		Weapon( std::string type );
		Weapon();
		~Weapon();
		
		std::string getType( void );
		void setType( std::string type );
};

#endif