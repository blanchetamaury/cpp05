/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaury <amaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:32:24 by amblanch          #+#    #+#             */
/*   Updated: 2025/11/24 22:58:09 by amaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(): name(""), grade(0) {
    //std::cout << "Default Contructor Bureaucrat Called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
    //std::cout << "Default Destructor Bureaucrat Called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other): name(other.name), grade(other.grade) {
    //std::cout << "Copy Constructor Bureaucrat Called" << std::endl;
    if (grade > 150)
        throw GradeTooHighException();
    if (grade < 1)
        throw GradeTooLowException();
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
    //std::cout << "Operator Constructor Bureaucrat Called" << std::endl;
    if (this != &other) {
        this->grade = other.grade;
        (std::string)this->name = other.name;
    }
    return (*this);
}

Bureaucrat::Bureaucrat(std::string newname, int newgrade): name(newname), grade(newgrade) {
    //std::cout << "Assigment Constructor Bureaucrat Called" << std::endl;
    if (grade > 150)
        throw GradeTooHighException();
    if (grade < 1)
        throw GradeTooLowException();
}

std::string Bureaucrat::getName() const {
    return (name);
}

int Bureaucrat::getGrade() const {
    return (grade);
}

void Bureaucrat::GradeDecrease() {
    if (this->grade > 1)
        this->grade--;
    else
        throw GradeTooLowException();
    std::cout << "Bureaucrat " << this->name << ", new grade is " << this->grade << "." << std::endl;
}

void Bureaucrat::GradeIncrease() {
    if (this->grade < 150)
        this->grade++;
    else
        throw GradeTooHighException();
    std::cout << "Bureaucrat " << this->name << ", new grade is " << this->grade << "." << std::endl;
}

void    Bureaucrat::signForm(Form &form) {
    if (form.getSign() == 1)
        std::cout << name << " couldn't sign because the Form is sign" << std::endl;
    else {
        try {
            form.beSigned(*this);
        }
        catch (std::exception &e) {
            std::cout << name << " couldn’t sign " << form.getName() << " because \"" << e.what() << "\"" << std::endl;
        }
    }
}


const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return ("grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return ("grade too low");
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &other) {
    out << other.getName() << ", bureaucrat grade " << other.getGrade() << ".";
    return out;
}