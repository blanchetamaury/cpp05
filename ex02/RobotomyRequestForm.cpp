/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 14:19:58 by amblanch          #+#    #+#             */
/*   Updated: 2025/11/24 17:55:51 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("", 72, 45) {
    std::cout << "Default constructor Shrubbery Called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "Default destructor Shrubbery Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string name): AForm(name, 72, 45) {
    std::cout << "Assigment constructor Shrubbery Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other): AForm(other.getName(), 145, 137) {
    std::cout << "Copy constructor Shrubbery Called" << std::endl;
}

RobotomyRequestForm   &RobotomyRequestForm::operator=(const RobotomyRequestForm &other){
    if (this != &other) {
        AForm::operator=(other);
    }
    return *this;
}

void        RobotomyRequestForm::executeForm() const {
    srand(time(0));
    if (rand() % 2 == 0)
        std::cout << getName() << "has been robotomized" << std::endl;
    else
        throw NotRobotomized();
}

std::ostream &operator<<(std::ostream &out, RobotomyRequestForm &other) {
    if (other.getSign())
        out << other.getName() << ", RobotomyRequestForm is sign.";
    else
        out << other.getName() << ", RobotomyRequestForm is not sign.";
    return out;
}

const char* RobotomyRequestForm::NotRobotomized::what() const throw() {
    return ("Not Robotomized");
}