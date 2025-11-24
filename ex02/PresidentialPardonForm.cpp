/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 14:33:49 by amblanch          #+#    #+#             */
/*   Updated: 2025/11/24 17:44:32 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("", 25, 5) {
    std::cout << "Default constructor Shrubbery Called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "Default destructor Shrubbery Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string name): AForm(name, 25, 5) {
    std::cout << "Assigment constructor Shrubbery Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other): AForm(other.getName(), 145, 137) {
    std::cout << "Copy constructor Shrubbery Called" << std::endl;
}

void        PresidentialPardonForm::executeForm() const {
    std::cout << getName() << "has been pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm   &PresidentialPardonForm::operator=(const PresidentialPardonForm &other){
    if (this != &other) {
        AForm::operator=(other);
    }
    return *this;
}

std::ostream &operator<<(std::ostream &out, PresidentialPardonForm &other) {
    if (other.getSign())
        out << other.getName() << ", PresidentialPardonForm is sign.";
    else
        out << other.getName() << ", PresidentialPardonForm is not sign.";
    return out;
}