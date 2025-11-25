/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:32:24 by amblanch          #+#    #+#             */
/*   Updated: 2025/11/25 09:02:41 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name(""), grade(150) {
    std::cout << "Default Contructor Bureaucrat Called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Default Destructor Bureaucrat Called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other): name(other.name), grade(other.grade) {
    std::cout << "Copy Constructor Bureaucrat Called" << std::endl;
    if (grade > 150)
        throw GradeTooLowException();
    if (grade < 1)
        throw GradeTooHighException();
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
    std::cout << "Operator Constructor Bureaucrat Called" << std::endl;
    if (this != &other) {
        this->grade = other.grade;
        (std::string)this->name = other.name;
    }
    return (*this);
}

Bureaucrat::Bureaucrat(std::string newname, int newgrade): name(newname), grade(newgrade) {
    std::cout << "Assigment Constructor Bureaucrat Called" << std::endl;
    if (grade > 150)
        throw GradeTooLowException();
    if (grade < 1)
        throw GradeTooHighException();
    std::cout << "Bureaucrat " << this->name << ", this grade is " << this->grade << "." << std::endl;
}

std::string Bureaucrat::getName() const {
    return (name);
}

int Bureaucrat::getGrade() const {
    return (grade);
}

void Bureaucrat::gradeDecrease() {
    this->grade++;
    if (grade > 150)
        throw GradeTooLowException();
    if (grade < 1)
        throw GradeTooHighException();
    std::cout << "Bureaucrat " << this->name << ", this grade is " << this->grade << "." << std::endl;
}

void Bureaucrat::gradeIncrease() {
    this->grade--;
    if (grade > 150)
        throw GradeTooLowException();
    if (grade < 1)
        throw GradeTooHighException();
     std::cout << "Bureaucrat " << this->name << ", this grade is " << this->grade << "." << std::endl;
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