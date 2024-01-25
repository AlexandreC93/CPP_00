#include "PhoneBook.hpp"
#include <limits>
#include <iostream>

int main(void) {
    PhoneBook book;
    std::string input = "";
    book.init();
    do {
        std::cout << ">> " << std::flush;
        if (!std::getline(std::cin, input))
            break;
        if (input == "EXIT")
            break;
        else if (input == "ADD")
            book.addContact();
        else if (input == "SEARCH") {
            book.printContacts();
            book.search();
        }
        else if (input[0] == 0)
            continue;
        else
            std::cout << "Please, enter a command: ADD, SEARCH, EXIT" << std::endl;
    std::cin.clear();
    } while (true);
    return 0;
}






