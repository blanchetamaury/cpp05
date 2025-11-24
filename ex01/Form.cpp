/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaury <amaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:39:15 by amblanch          #+#    #+#             */
/*   Updated: 2025/11/24 22:51:21 by amaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name(""), sign(0), requiredsign(0), requiredexec(0) {
    //std::cout << "Default constructor Form called" << std::endl;
}

Form::~Form() {
    //std::cout << "Destrcutor Form called" << std::endl;
}

Form::Form(const std::string name, const int requiredsign, const int requiredexec): name(name), sign(false), requiredsign(requiredsign), requiredexec(requiredexec) {
    //std::cout << "Assigment constructor Form called" << std::endl;
}

Form::Form(const Form &other): name(other.name), sign(other.sign), requiredsign(other.requiredsign), requiredexec(other.requiredexec) {
    //std::cout << "Copy constructor Form called" << std::endl;
}

Form &Form::operator=(const Form &other) {
    //std::cout << "Operator Constructor Form Called" << std::endl;
    if (this != &other) {
        (std::string)this->name = other.name;
    }
    return (*this);
}

const std::string   Form::getName() const {
    return name;
}

bool                Form::getSign() const {
    return sign;
}

void    Form::beSigned(Bureaucrat &other) {
    if (other.getGrade() > requiredsign)
        throw GradeTooLowException();
    std::cout << other.getName() << " signed " << name << std::endl;
    sign = true;
}

const char* Form::GradeTooHighException::what() const throw() {
    return ("grade too high");
}

const char* Form::GradeTooLowException::what() const throw() {
    return ("grade too low");
}

std::ostream &operator<<(std::ostream &out, Form &other) {
    if (other.getSign())
        out << other.getName() << ", Form is sign.";
    else
        out << other.getName() << ", Form is not sign.";
    return out;
}