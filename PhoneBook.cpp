/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martina <martina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:19:03 by martina           #+#    #+#             */
/*   Updated: 2024/04/26 17:48:35 by martina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string PhoneBook::cutLength(std::string input) {

    if (input.length() > 10)
    {
        input = input.substr(0,9);
        input += ".";
    }
    return input;
}

PhoneBook::PhoneBook() {
    this->index = 0;
}

void PhoneBook::addData() 
{
  Contact contact;
  std::string input;

  int i = 0;
  while (i < 5)
  {
    std::cout << "Enter First Name" << std::endl;
    if (input.empty())
    {
      std::cout << "Non puoi farlo... Non farmi arrabbiare" << std::endl;
      return;
    }

    if (i == 0)
    {
      contact.SetFirstName(input);
    } else if (i == 1)
    {
      contact.SetLastName(input);
    } else if (i == 2)
    {
      contact.SetNickName(input);
    } else if (i == 3)
    {
      contact.SetPhoneNumber(input);
    } else if (i == 4)
    {
      contact.SetDarkestSecret(input);
    }
    i++;
  }

  this->mContacts[this->index % 8] = contact;
  this->index++;
}

void PhoneBook::searchData() 
{

  int input;

  std::cout << "|";
  std::cout << std::setw(10) << "index" << "|";
  std::cout << std::setw(10) << "Nome" << "|";
  std::cout << std::setw(10) << "Cognome" << "|";
  std::cout << std::setw(10) << "NickName" << "|" << std::endl;

  int i = 0;
  while (i < (index < 8 ? index : 8))
  {
    std::cout << "|";
    std::cout << std::setw(10) << i << "|";
    std::cout << std::setw(10) << this->cutLength(this->mContacts[i].getFirstName()) << "|";
    std::cout << std::setw(10) << this->cutLength(this->mContacts[i].getLastName()) << "|";
    std::cout << std::setw(10) << this->cutLength(this->mContacts[i].getNickName()) << "|" << std::endl;
    i++;
  }

  std::cout << "Quindi? Che vuoi fare?" << std::endl;
  std::cin >> input;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  if (std::cin.fail())
  {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Solo numeri, mi raccomando non fare stronzate" << std::endl;
    return;
  }

  if (index == 0)
  {
    std::cout << "Non hai amici" << std::endl;
  }
  else if (input < (index < 8 ? index % 8 : 8) && input > -1)
  {
    std::cout << std::left << std::setw(MARGINRIGHT) << "Nome";
    std:: cout << " : ";
    std::cout << this->mContacts[(input)].getFirstName() << std::endl;
    std::cout << std::setw(MARGINRIGHT) << "Cognome";
    std:: cout << " : ";
    std::cout << this->mContacts[(input)].getLastName() << std::endl;
    std::cout << std::setw(MARGINRIGHT) << "Soprannome";
    std:: cout << " : ";
    std::cout << this->mContacts[(input)].getNickName() << std::endl;
    std::cout << std::setw(MARGINRIGHT) << "Numero";
    std:: cout << " : ";
    std::cout << this->mContacts[(input)].getPhonNumber() << std::endl;
    std::cout << std::setw(MARGINRIGHT) << "Un segreto, purchè non sia astemio";
    std:: cout << " : ";
    std::cout << this->mContacts[(input)].getDarkestSecret() << std::endl;
  }
  else
    {
    std::cout << "Vedi quello che devi fare!" << std::endl;
    }
}

int main()
{
  PhoneBook phoneBook;

  while(true)
  {
    std::cout << "\nPhoneBook Menu:\n";
    std::cout << "1. Aggiungi Contatto\n";
    std::cout << "2. Cerca\n";
    std::cout << "3. Esci\n";
    std::cout << "Dimmi quello che vuoi fare, veloce che voglio andare a bere: ";

    int choice;
    std::cin >> choice;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear input buffer

    if (std::cin.fail())
    {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Non puoi farlo, ritenta sarai più fortunato\n";
      continue;
    }

    switch (choice)
    {
      case 1:
        phoneBook.addData();
        break;
      case 2:
        phoneBook.searchData();
        break;
      case 3:
        std::cout << "Finalmente te ne vai\n";
        return 0;
      default:
        std::cout << "Cretino, devi mettere un numero da 1 a 3, non è difficile forza...\n";
    }
  }

  return 0;
}