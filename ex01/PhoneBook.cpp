#include "./PhoneBook.hpp"

PhoneBook::PhoneBook(){

}
PhoneBook::~PhoneBook(){

}

void PhoneBook::addContact(){

	std::string str;

		std::cout << "Insert first name: ";
		std::getline(std::cin, str);
		_contacts[_index % 8].setFirstName(str);
		std::cout << "Insert last name: ";
		std::getline(std::cin, str);
		_contacts[_index % 8].setLastName(str);
		std::cout << "Insert nickname: ";
		std::getline(std::cin, str);
		_contacts[_index % 8].setNickname(str);
		std::cout << "Insert phone number: ";
		std::getline(std::cin, str);
		_contacts[_index % 8].setPhoneNumber(str);
		std::cout << "Insert your darkest secret ;) ";
		std::getline(std::cin, str);
		_contacts[_index % 8].setDarkestSecret(str);
		
		_index++;
	
	
}

void PhoneBook::searchContact(){

}

void    PhoneBook::printContacts( void ) {

	for (int i = 0; i < 8; i++) {
		std::cout << "\n_Contact number: " << i << std::endl;
		std::cout << "| firstName: " << this->_contacts[i].getFirstName() << std::endl;
		std::cout << "| lastName: " << this->_contacts[i].getLastName() << std::endl;
		std::cout << "| nickname: " << this->_contacts[i].getNickname() << std::endl;
		std::cout << "| phoneNumber: " << this->_contacts[i].getPhoneNumber() << std::endl;
		std::cout << "| darkestSecret: " << this->_contacts[i].getDarkestSecret() << std::endl;
	}
	std::cout << std::endl;

}
