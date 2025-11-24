/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaury <amaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 14:19:58 by amblanch          #+#    #+#             */
/*   Updated: 2025/11/24 23:20:56 by amaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("", 72, 45) {
    //std::cout << "Default constructor Robotomy Called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    //std::cout << "Default destructor Robotomy Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string name): AForm(name, 72, 45) {
    //std::cout << "Assigment constructor Robotomy Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other): AForm(other.getName(), 72, 45) {
    //std::cout << "Copy constructor Robotomy Called" << std::endl;
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
        std::cout << getName() << " has been robotomized" << std::endl;
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
    return ("The Robotomized did not work");
}