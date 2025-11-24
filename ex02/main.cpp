/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaury <amaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:31:54 by amblanch          #+#    #+#             */
/*   Updated: 2025/11/24 23:20:36 by amaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void){
	
	std::srand(time(0));
	int grade = std::rand() % 50;
	if (grade < 0) grade *= -1;
	if (grade > 150)
	{
		std::srand(time(0));
		int r = std::rand() % 2;
		if (r == 0)
			grade *= -1;
	}
	std::cout << "Random grade is " << grade << std::endl;
	std::string name = "Didier";
	try{
		Bureaucrat bureaucrat(name, grade);
		std::cout << bureaucrat << std::endl;
	
		std::cout <<"\nShrubberyCreationForm : \n" << std::endl;
		
		ShrubberyCreationForm Sform("creation");
		std::cout << Sform << std::endl;
		bureaucrat.signForm(Sform);
		try{bureaucrat.executeForm(Sform);}
		catch(AForm::GradeTooLowException &e){std::cout << "error\n" << std::endl;}
		
		std::cout <<"\nRobotomyRequestForm : \n" << std::endl;
		
		RobotomyRequestForm Rform("creation");
		std::cout << Rform << std::endl;
		bureaucrat.signForm(Rform);
		try{bureaucrat.executeForm(Rform);}
		catch(AForm::GradeTooLowException &e){std::cout << "error\n" << std::endl;}
		
		std::cout <<"\nPresidentialPardonForm : \n" << std::endl;
		
		PresidentialPardonForm Pform("creation");
		std::cout << Pform << std::endl;
		bureaucrat.signForm(Pform);
		try{bureaucrat.executeForm(Pform);}
		catch(AForm::GradeTooLowException &e){std::cout << "error\n" << std::endl;}
	}
	catch (Bureaucrat::GradeTooHighException& e){std::cout << name << " has " << e.what() << std::endl;}
	catch (Bureaucrat::GradeTooLowException& e){std::cout << name << " has " << e.what() << std::endl;}
}	