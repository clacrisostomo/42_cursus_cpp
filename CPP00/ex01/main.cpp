/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:31:31 by csantos-          #+#    #+#             */
/*   Updated: 2023/10/24 16:28:38 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"

int main(){
    
    std::string command;
    PhoneBook   phoneBook;

    std::cout << "\e[1;36m""Welcome to PhoneBook! =D""\e[0m" << std::endl;

    while (!std::cin.eof())
    {
        std::cout << "Insert one of the following commands:" "\e[1;32m"" ADD""\e[0m""," "\e[1;32m"" SEARCH""\e[0m" " or" "\e[1;32m"" EXIT""\e[0m""." << std::endl;
        std::cout << "You can EXIT at any time." << std::endl;
        std::getline(std::cin, command);
        
        if (command == "EXIT" || command == "exit")
            phoneBook.exitProgram(command);
        else if (command == "ADD" || command == "add")
            phoneBook.addContact();
        else if (command == "SEARCH" || command == "search")
            phoneBook.searchContact();
        else    std::cout << "Please enter a valid command: ADD, SEARCH or EXIT." << std::endl;
    }
    return (0);
}