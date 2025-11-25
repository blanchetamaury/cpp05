/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 23:30:50 by amaury            #+#    #+#             */
/*   Updated: 2025/11/25 09:46:22 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {
    //std::cout << "Default constructor Intern called" << std::endl;
}

Intern::~Intern() {
    //std::cout << "Destrcutor Intern called" << std::endl;
}

Intern::Intern(const Intern &other) {
    (void)other;
    //std::cout << "Copy constructor Intern called" << std::endl;
}

Intern &Intern::operator=(const Intern &other) {
    //std::cout << "Operator Constructor Intern Called" << std::endl;
    (void)other;
    return (*this);
}

AForm   *Intern::makeForm(std::string type, std::string file) {
    std::string request[3] = {
        "shrubbery creation",
		"robotomy request",
		"presidential pardon"
    };

    int i;
    for (i = 0; i < 3 && type != request[i]; i++);
    
    switch (i)
    {
        case 0:
            std::cout << "Intern creates " << type << std::endl;
            return new ShrubberyCreationForm(file);
        case 1:
            std::cout << "Intern creates " << type << std::endl;
            return new RobotomyRequestForm(file);
        case 2:
            std::cout << "Intern creates " << type << std::endl;
            return new PresidentialPardonForm(file);
        default:
            std::cout << "The intern cannot create " << type << std::endl;
            break;
    }
    return NULL;
}