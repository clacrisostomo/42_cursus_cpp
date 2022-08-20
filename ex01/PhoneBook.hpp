#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "./Contact.hpp"

class PhoneBook{

	private:

		int		_index;
		Contact	_contacts[8];

	public:

		PhoneBook();
		~PhoneBook();

		void addContact();
		void searchContact();
		void printContacts(int i);
		std::string printWord(std::string word);

		
};

#endif
