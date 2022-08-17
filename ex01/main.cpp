#include "./PhoneBook.hpp"

int main(){
	
	std::string	command;
	PhoneBook	phonebook;

	std::cout << "Welcome to our crepioca PhoneBook!" << std::endl;
	
	while (42)
	{
		std::cout << "Insert one of the following commands: ADD, SEARCH or EXIT:" << std::endl;
		std::getline(std::cin, command);

		if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
			phonebook.searchContact();
		else if (command == "EXIT")
			break;
		else
			std::cout << "Please enter a valid command: ADD, SEARCH or EXIT" << std::endl;
	}
	return (0);
}