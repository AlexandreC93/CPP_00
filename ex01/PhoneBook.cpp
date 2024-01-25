#include "PhoneBook.hpp"
#include <climits>

PhoneBook::PhoneBook(/* args */)
{
}

PhoneBook::~PhoneBook()
{
}

void    PhoneBook::printContacts(void) const {
    std::cout << "----------------- CONTACTS ------------------" << std::endl;
    for (size_t i = 0; i < 8; i++) {
        this->_contacts[i].view(i);
    }
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << std::endl;
}

void    PhoneBook::init(void) const {
    std::cout << std::endl;
    std::cout << "PhoneBook" << std::endl;
    std::cout << std::endl;
    std::cout << "ADD: To add a contact." << std::endl;
    std::cout << "SEARCH: To search a contact." << std::endl;
    std::cout << "EXIT: to exit PhoneBook." << std::endl;
    std::cout << std::endl;
}

void    PhoneBook::addContact(void) {
    static int  i;
    this->_contacts[i % 8].start();
    this->_contacts[i % 8].setIndex(i % 8);
    i++;
}


#include <sstream>

int PhoneBook::_readInput() const {
    int input = -1;
    std::string line;

    while (true) {
        std::cout << "Enter the contact index: " << std::flush;
        std::getline(std::cin, line);
        if (!line.empty()) {
            std::istringstream iss(line);
            if (iss >> input) {
                if (input >= 0 && input <= 8) {
                    break;
                } else
                    std::cout << "Invalid index: must be between 0 and 8." << std::endl;
            } else
                std::cout << "Invalid input: please enter a valid number." << std::endl;
        }
    }
    return (input);
}


void    PhoneBook::search(void) const {
    int i = this->_readInput();
    this->_contacts[i].display(i);
}