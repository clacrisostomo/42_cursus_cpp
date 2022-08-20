#include "./PhoneBook.hpp"

PhoneBook::PhoneBook(): _index(0){

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

// TODO: tratamento de nome maior do que 10 char
// TODO: tratamento de erros -> mensagens
// TODO: arrumar quando chama o search e já coloca um argumento
// TODO: não pode aceitar campos em branco

void PhoneBook::searchContact(){

	std::string nbr;
	int contact;
	

	std::cout << "=============================================" << std::endl;
	std::cout << "|" << std::setw(10) << "INDEX";
	std::cout << "|" << std::setw(10) << "FIRST NAME";
	std::cout << "|" << std::setw(10) << "LAST NAME";
	std::cout << "|" << std::setw(10) << "NICKNAME" << "|" << std::endl;
	std::cout << "|==========|==========|==========|==========|" << std::endl;


	for (int i = 0; i < (_index > 8 ? 8 : _index); i++){
		std::cout << "|" << std::setw(10) << i;
		std::cout << "|" << std::setw(10) << _contacts[i].getFirstName();
		std::cout << "|" << std::setw(10) << _contacts[i].getLastName();
		std::cout << "|" << std::setw(10) << _contacts[i].getNickname() << "|" << std::endl;
		std::cout << "=============================================" << std::endl;
	}
	std::cout << "Pode escolher fera :";
	std::getline(std::cin, nbr);
	contact = nbr[0] - '0';
	printContacts(contact);
}

void PhoneBook::printContacts(int i) {

	std::cout << "\n_Contact number: " << i << std::endl;
	std::cout << "| firstName: " << this->_contacts[i].getFirstName() << std::endl;
	std::cout << "| lastName: " << this->_contacts[i].getLastName() << std::endl;
	std::cout << "| nickname: " << this->_contacts[i].getNickname() << std::endl;
	std::cout << "| phoneNumber: " << this->_contacts[i].getPhoneNumber() << std::endl;
	std::cout << "| darkestSecret: " << this->_contacts[i].getDarkestSecret() << std::endl;
	std::cout << std::endl;

}
