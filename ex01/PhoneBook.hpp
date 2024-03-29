#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
    Contact     _contacts[8];
    int         _readInput(void) const;
    // uint64_t    _numberOfContacts;
public:
    PhoneBook();
    ~PhoneBook();
    void    init(void) const;
    void    addContact(void);
    void    printContacts(void) const;
    void    search(void) const;
};

#endif