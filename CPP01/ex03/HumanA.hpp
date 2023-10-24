#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "./Weapon.hpp"

class HumanA{

	private:

		std::string	_name;
		Weapon &_type;

	public:

		HumanA( std::string name, Weapon &type );
		~HumanA();

		std::string getName( void );
		void setName( std::string name );
		void attack( void );
};

#endif