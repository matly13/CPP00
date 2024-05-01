/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martina <martina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 10:57:13 by martina           #+#    #+#             */
/*   Updated: 2024/04/26 15:13:31 by martina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact 
{
    private:
        std::string mFirstName;
        std::string mLastName;
        std::string mNickName;
        std::string mPhoneNumber;
        std::string mDarkestSecret;
    public:
        Contact(void);
        ~Contact(void);
        void        SetFirstName(const std::string &str);
        void        SetLastName(const std::string &str);
        void        SetNickName(const std::string &str);
        void        SetPhoneNumber(const std::string &str);
        void        SetDarkestSecret(const std::string &str);
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickName() const;
        std::string getPhonNumber() const;
        std::string getDarkestSecret() const;
};

#endif