#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
    private:
        int         m_index;
        std::string m_firstName;
        std::string m_lastName;
        std::string m_nickName;
        std::string m_phoneNumber;
        std::string m_darkestSecret;

        std::string m_printLen(std::string str) const;
        std::string m_getInput(std::string str) const;
    public:
    Contact();
    ~Contact();
    void    start(void);
    void    view(int index) const;
    void    display(int index) const;
    void    setIndex(int i);
};

#endif