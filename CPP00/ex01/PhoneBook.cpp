/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:44:57 by csantos-          #+#    #+#             */
/*   Updated: 2023/12/20 01:23:29 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"

PhoneBook::PhoneBook(): _index(0){
    
}

PhoneBook::~PhoneBook(){
    
}

void    PhoneBook::exitProgram(std::string cmd){
    if (cmd == "EXIT" || cmd == "exit")
    {
        std::cout << "\e[1;96m""...""\e[0m" << std::endl;
        std::cout << "\e[1;96m""Exiting PhoneBook...""\e[0m" << std::endl;
        exit(0);
    }
}

void    PhoneBook::addContact(){
    
    addFirstName();
    addLastName();
    addNickname();
    addPhoneNumber();
    addDarkestSecret();
}

void    PhoneBook::searchContact(){
    
    std::string nbr;
    int         contact;

    std::cout << "\e[0;36m""=============================================""\e[0m" << std::endl;
    std::cout << "\e[0;36m""|""\e[0m" << std::setw(10) << "INDEX";
    std::cout << "\e[0;36m""|""\e[0m" << std::setw(10) << "FIRST NAME";
    std::cout << "\e[0;36m""|""\e[0m"<< std::setw(10) << "LAST NAME";
    std::cout << "\e[0;36m""|""\e[0m" << std::setw(10) << "NICKNAME" << "\e[0;36m""|""\e[0m" << std::endl;
    std::cout << "\e[0;36m""|==========|==========|==========|==========|""\e[0m" << std::endl;

    for (int i = 0; i < (_index > 8 ? 8 : _index); i++)
    {
        std::cout << "\e[0;36m""|""\e[0m" << std::setw(10) << i;
        std::cout << "\e[0;36m""|""\e[0m" << std::setw(10) << printWord(_contacts[i].getFirstName());
        std::cout << "\e[0;36m""|""\e[0m" << std::setw(10) << printWord(_contacts[i].getLastName());
        std::cout << "\e[0;36m""|""\e[0m" << std::setw(10) << printWord(_contacts[i].getNickname()) << "\e[0;36m""|""\e[0m" << std::endl;
        std::cout << "\e[0;36m""=============================================""\e[0m" << std::endl;
    }
    std::cout << "Please choose one contact from the index: ";
    std::getline(std::cin, nbr);
    exitProgram(nbr);
    
    while (nbr.length() > 1 || nbr[0] < 48 || nbr[0] > 55)
    {
        std::cout << "Please enter a number from " "\e[1;32m""0""\e[0m" " to " "\e[1;32m""7""\e[0m"": ";
        std::getline(std::cin, nbr);
        exitProgram(nbr);
    }
    while (nbr.length() < 1)
    {
        std::cout << "Please choose one contact from the index: ";
        std::getline(std::cin, nbr);
        exitProgram(nbr);
    }
    contact = nbr[0] - 48;
    printContacts(contact);
}

void    PhoneBook::printContacts(int i){
    
    std::cout << "\n_Contact number: " << i << std::endl;
    std::cout << "| First Name: " << this->_contacts[i].getFirstName() << std::endl;
    std::cout << "| Last Name: " << this->_contacts[i].getLastName() << std::endl;
    std::cout << "| Nickname: " << this->_contacts[i].getNickname() << std::endl;
    std::cout << "| Phone Number: " << this->_contacts[i].getPhoneNumber() << std::endl;
    std::cout << "| Darkest Secret: " << this->_contacts[i].getDarkestSecret() << std::endl;
    std::cout << std::endl;
}

std::string PhoneBook::printWord(std::string word){
    if (word.length() > 10)
    {
        return(std::string(word.begin(), word.begin() + 9) + '.');
    }
    else
        return(word);
}