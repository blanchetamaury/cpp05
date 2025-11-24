/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:39:15 by amblanch          #+#    #+#             */
/*   Updated: 2025/11/24 10:35:10 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name(""), sign(0), requiredsign(0), requiredexec(0) {
    std::cout << "Default constructor Form called" << std::endl;
}

Form::~Form() {
    std::cout << "Destrcutor Form called" << std::endl;
}

Form::Form(const std::string name, bool sign, const int requiredsign, const int requiredexec): name(name), sign(sign), requiredsign(requiredsign), requiredexec(requiredexec) {
    std::cout << "Assigment constructor Form called" << std::endl;
}

Form::Form(const Form &other): name(other.name), sign(other.sign), requiredsign(other.requiredsign), requiredexec(other.requiredexec) {
    std::cout << "Copy constructor Form called" << std::endl;
}

Form &Form::operator=(const Form &other) {
    std::cout << "Operator Constructor Form Called" << std::endl;
    if (this != &other) {
        (std::string)this->name = other.name;
    }
    return (*this);
}

void    Form::signForm(Bureaucrat &other) {
    if (sign == 1)
        std::cout << other.getName() << " couldn't sign because the Form is sign" << std::endl;
    else {
        try {
            if (other.getGrade() > requiredsign) {
                throw GradeTooHighException();
            }
            if (other.getGrade() < 1) {
                throw GradeTooHighException();
            }
            beSigned(other);
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
}

void    Form::beSigned(Bureaucrat &other) {
    std::cout << other.getName() << " signed " << name << std::endl;
}

const char* Form::GradeTooHighException::what() const {
    return ("grade too high");
}

const char* Form::GradeTooLowException::what() const {
    return ("grade too low");
}