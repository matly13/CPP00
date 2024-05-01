/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martina <martina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:03:42 by martina           #+#    #+#             */
/*   Updated: 2024/04/26 17:37:47 by martina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"
#include <limits>

#define MARGINRIGHT 15

class PhoneBook {

private:
    Contact mContacts[8];
    int     index;

public :
    PhoneBook();

    std::string cutLength(std::string str);
    bool        checkSpace(std::string str);
    void        addData();
    void        searchData();
    Contact	get_contact(int index);
};

#endif