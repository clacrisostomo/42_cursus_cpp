#include "./PhoneBook.hpp"

int main(){
	
	std::string	command;
	PhoneBook	phonebook;

	std::cout << "\e[1;36m" "Welcome to PhoneBook!" "\e[0m" << std::endl;
	
	while (!std::cin.eof())
	{
		
		std::cout << "Insert one of the following commands: ADD, SEARCH or at anytime EXIT:" << std::endl;
		std::getline(std::cin, command);

		if (command == "EXIT")
			phonebook.exitProgram(command);
		else if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
			phonebook.searchContact();
		else
			std::cout << "Please enter a valid command: ADD, SEARCH or EXIT" << std::endl;
	}
	return (0);
}