/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martina <martina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:08:09 by martina           #+#    #+#             */
/*   Updated: 2024/04/26 17:13:16 by martina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

void    Contact::SetFirstName (const std::string& str) {
    this->mFirstName = str;
}

void    Contact::SetLastName (const std::string& str) {
    this->mLastName = str;
}

void    Contact::SetNickName (const std::string& str) {
    this->mNickName = str;
}

void    Contact::SetPhoneNumber (const std::string& str) {
    this->mPhoneNumber = str;
}

void    Contact::SetDarkestSecret (const std::string& str) {
    this->mDarkestSecret = str;
}

std::string Contact::getFirstName () const {
    return this->mFirstName;
}

std::string Contact::getLastName () const {
    return this->mLastName;
}

std::string Contact::getNickName () const {
    return this->mNickName;
}

std::string Contact::getPhonNumber () const {
    return this->mPhoneNumber;
}

std::string Contact::getDarkestSecret () const {
    return this->mDarkestSecret;
}