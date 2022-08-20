#include "./PhoneBook.hpp"

int main(){
	
	std::string	command;
	PhoneBook	phonebook;

	std::cout << "Welcome to our crepioca PhoneBook!" << std::endl;
	
	while (!std::cin.eof())
	{
		
		std::cout << "Insert one of the following commands: ADD, SEARCH or EXIT:" << std::endl;
		std::getline(std::cin, command);

		if (command == "EXIT")
			break;
		else if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
			phonebook.searchContact();
		else
			std::cout << "Please enter a valid command: ADD, SEARCH or EXIT" << std::endl;
		//phonebook.printContacts();
	}
	return (0);
}