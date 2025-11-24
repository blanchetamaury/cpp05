/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:39:15 by amblanch          #+#    #+#             */
/*   Updated: 2025/10/31 09:50:45 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): name(""), sign(0), requiredsign(0), requiredexec(0) {
    std::cout << "Default constructor AForm called" << std::endl;
}

AForm::~AForm() {
    std::cout << "Destrcutor AForm called" << std::endl;
}

AForm::AForm(const std::string name, const int requiredsign, const int requiredexec): name(name), sign(false), requiredsign(requiredsign), requiredexec(requiredexec) {
    std::cout << "Assigment constructor AForm called" << std::endl;
}

AForm::AForm(const AForm &other): name(other.name), sign(other.sign), requiredsign(other.requiredsign), requiredexec(other.requiredexec) {
    std::cout << "Copy constructor AForm called" << std::endl;
}

AForm &AForm::operator=(const AForm &other) {
    std::cout << "Operator Constructor AForm Called" << std::endl;
    if (this != &other) {
        (std::string)this->name = other.name;
    }
    return (*this);
}

const std::string   AForm::getName() const {
    return name;
}

bool                AForm::getSign() const {
    return sign;
}

int           AForm::getRequiredSign() const {
    return requiredsign;
}

int           AForm::getRequiredExec() const {
    return requiredexec;
}

void    AForm::beSigned(Bureaucrat &other) {
    std::cout << other.getName() << " signed " << name << std::endl;
    sign = true;
}

const char* AForm::GradeTooHighException::what() const throw() {
    return ("grade too high");
}

const char* AForm::GradeTooLowException::what() const throw() {
    return ("grade too low");
}

void        AForm::execute(Bureaucrat const &executor) const {
    if (executor.getGrade() > requiredexec)
        throw GradeTooLowException();
    executeForm();
}