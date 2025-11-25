/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:31:54 by amblanch          #+#    #+#             */
/*   Updated: 2025/11/25 09:43:07 by amblanch         ###   ########.fr       */
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
	std::cout << "Random grade is " << grade << std::endl;
	std::string name = "Didier";
	try{
		Bureaucrat bureaucrat(name, grade);
		std::cout << bureaucrat << std::endl;
	
		std::cout <<"\nShrubberyCreationForm : \n" << std::endl;
		
		ShrubberyCreationForm Sform("creation");
		std::cout << Sform << std::endl;
		bureaucrat.signForm(Sform);
		bureaucrat.executeForm(Sform);
		
		std::cout <<"\nRobotomyRequestForm : \n" << std::endl;
		
		RobotomyRequestForm Rform("creation");
		std::cout << Rform << std::endl;
		bureaucrat.signForm(Rform);
		bureaucrat.executeForm(Rform);
		
		std::cout <<"\nPresidentialPardonForm : \n" << std::endl;
		
		PresidentialPardonForm Pform("creation");
		std::cout << Pform << std::endl;
		bureaucrat.signForm(Pform);
		bureaucrat.executeForm(Pform);
	}
	catch (std::exception& e){std::cout << name << " has " << e.what() << std::endl;}}	