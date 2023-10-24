#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "./Weapon.hpp"

class HumanB{

	private:

		std::string	_name;
		Weapon *_type;

	public:

		HumanB(std::string name, Weapon *type);
		HumanB();
		~HumanB();

		std::string getName( void );
		void setName(std::string name);
		void attack( void );
};

#endif