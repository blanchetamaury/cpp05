/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:31:54 by amblanch          #+#    #+#             */
/*   Updated: 2025/11/25 09:44:30 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void){
	
	std::srand(time(0));
	int grade = std::rand() % 50;
	std::cout << "Random grade is " << grade << std::endl;
	std::string name = "Didier";
	try{
		Bureaucrat bureaucrat(name, grade);
		std::cout << bureaucrat << std::endl;
	
		Intern someRandomIntern;
		AForm* SForm = someRandomIntern.makeForm("shrubbery creation", "creation");
		AForm* RForm = someRandomIntern.makeForm("robotomy request", "robot");
		AForm* PForm = someRandomIntern.makeForm("presidential pardon", "sorry");
		AForm* CForm = someRandomIntern.makeForm("unknown", "Bender");
		
		std::cout << "\nBureaucrat Signed :\n" << std::endl;

		bureaucrat.signForm(*SForm);
		bureaucrat.signForm(*RForm);
		bureaucrat.signForm(*PForm);

		std::cout << "\nBureaucrat Execute :" << std::endl;

		std::cout <<"\nShrubberyCreationForm : \n" << std::endl;
		
		bureaucrat.executeForm(*SForm);

		std::cout <<"\nRobotomyRequestForm : \n" << std::endl;
		
		bureaucrat.executeForm(*RForm);

		std::cout <<"\nPresidentialPardonForm : \n" << std::endl;
		
		bureaucrat.executeForm(*PForm);
		
		delete RForm;
		delete SForm;
		delete PForm;
		delete CForm;

	}
	catch (std::exception& e){std::cout << name << " has " << e.what() << std::endl;}
}	