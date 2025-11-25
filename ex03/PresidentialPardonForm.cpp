/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 14:33:49 by amblanch          #+#    #+#             */
/*   Updated: 2025/11/25 09:31:40 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("", 25, 5) {
    //std::cout << "Default constructor Presidential Called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    //std::cout << "Default destructor Presidential Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string name): AForm(name, 25, 5) {
    //std::cout << "Assigment constructor Presidential Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other): AForm(other.getName(), 25, 5) {
    //std::cout << "Copy constructor Presidential Called" << std::endl;
}

void        PresidentialPardonForm::executeForm() const {
    std::cout << getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm   &PresidentialPardonForm::operator=(const PresidentialPardonForm &other){
    if (this != &other) {
        AForm::operator=(other);
    }
    return *this;
}