#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "./Contact.hpp"

class PhoneBook{

	public:

		PhoneBook();
		~PhoneBook();

	private:


		void addContact();
		void searchContact();
		Contact	_database[8];

};

#endif
