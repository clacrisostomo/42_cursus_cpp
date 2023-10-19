#include "./PhoneBook.hpp"

PhoneBook::PhoneBook(): _index(0){

}
PhoneBook::~PhoneBook(){

}

void PhoneBook::exitProgram(std::string cmd){
	if (cmd == "EXIT")
	{
		std::cout << "..." << std::endl;
		std::cout << "Exiting PhoneBook..." << std::endl;
		exit(0) ;
	}
			
}

void PhoneBook::addContact(){

	std::string str;

		std::cout << "Insert first name: ";
		std::getline(std::cin, str);
		exitProgram(str);
		while (str.length() < 1){
			std::cout << "Please insert first name: ";
			std::getline(std::cin, str);
			exitProgram(str);
		}
		_contacts[_index % 8].setFirstName(str);
		std::cout << "Insert last name: ";
		std::getline(std::cin, str);
		exitProgram(str);
		while (str.length() < 1){
			std::cout << "Please insert last name: ";
			std::getline(std::cin, str);
			exitProgram(str);
		}
		_contacts[_index % 8].setLastName(str);
		std::cout << "Insert nickname: ";
		std::getline(std::cin, str);
		exitProgram(str);
		while (str.length() < 1){
			std::cout << "Please insert nickname: ";
			std::getline(std::cin, str);
			exitProgram(str);
		}
		_contacts[_index % 8].setNickname(str);
		std::cout << "Insert phone number: ";
		std::getline(std::cin, str);
		exitProgram(str);
		while (str.length() < 1){
			std::cout << "Please insert phone number: ";
			std::getline(std::cin, str);
			exitProgram(str);
		}
		_contacts[_index % 8].setPhoneNumber(str);
		std::cout << "Insert your darkest secret ;): ";
		std::getline(std::cin, str);
		exitProgram(str);
		while (str.length() < 1){
			std::cout << "Please insert darkest secret: ";
			std::getline(std::cin, str);
			exitProgram(str);	
		}
		_contacts[_index % 8].setDarkestSecret(str);
		exitProgram(str);
		_index++;
	
	
}

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
		std::cout << "|" << std::setw(10) << printWord(_contacts[i].getFirstName());
		std::cout << "|" << std::setw(10) << printWord(_contacts[i].getLastName());
		std::cout << "|" << std::setw(10) << printWord(_contacts[i].getNickname()) << "|" << std::endl;
		std::cout << "=============================================" << std::endl;
	}
	std::cout << "Please chose one contact from the index: ";
	std::getline(std::cin, nbr);
	exitProgram(nbr);
	while (nbr.length() > 1 || nbr[0] < 48 || nbr[0] > 55){
		std::cout << "Please enter a number from 0 to 7: ";
		std::getline(std::cin, nbr);
		exitProgram(nbr);
	}
	while (nbr.length() < 1){
		std::cout << "Please chose one contact from the index: ";
		std::getline(std::cin, nbr);
		exitProgram(nbr);
	}
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

std::string PhoneBook::printWord(std::string word){
	
	if (word.length() > 10){
		
		return (std::string(word.begin(), (word.begin() + 9)) + '.');
	}
	else
		return (word);
}
