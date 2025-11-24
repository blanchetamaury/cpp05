/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:31:54 by amblanch          #+#    #+#             */
/*   Updated: 2025/11/24 14:49:28 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	testSign(Bureaucrat &bureaucrat, AForm &form)
{
	std::cout << "   └─ Sign with " << bureaucrat << ":" << std::endl << "      ";
	bureaucrat.signForm(form);
}

void	testExecute(Bureaucrat &bureaucrat, AForm &form)
{
	std::cout << "   └─ Excute with " << bureaucrat << ":" << std::endl << "      ";
	bureaucrat.executeForm(form);
}

int main() {
	Bureaucrat					jeanmichel("Jean-Michel Manager", 3);
	Bureaucrat					kevin("Kevin PowerPoint", 42);
	Bureaucrat					brigitte("Brigitte RH", 87);
	Bureaucrat					thierry("Thierry Excel", 120);
	Bureaucrat					patrick("Patrick Café", 149);

	ShrubberyCreationForm		shrubbery("outside");
	RobotomyRequestForm			robotomy("meeting_room");
	PresidentialPardonForm		pardon("Brigitte RH");

	std::cout << "🌳 Shrubbery Form ============================================" << std::endl;
	std::cout << "└─ 📄️ Standard output test" << std::endl;
	std::cout << shrubbery;
	std::cout << "└─ 🧩 Form method" << std::endl;
	std::cout << "   └─ setTarget()" << std::endl;
	std::cout << "└─ ✍️ Sign test" << std::endl;
	testSign(patrick, shrubbery);
	testSign(thierry, shrubbery);
	testSign(brigitte, shrubbery);
	testSign(kevin, shrubbery);
	testSign(jeanmichel, shrubbery);
	shrubbery.beSigned(jeanmichel);
	std::cout << "└─ ⚒️️ Execute test" << std::endl;
	testExecute(patrick, shrubbery);
	testExecute(thierry, shrubbery);
	testExecute(brigitte, shrubbery);
	testExecute(kevin, shrubbery);
	testExecute(jeanmichel, shrubbery);

	std::cout << "🕳️ Robotomy Form =============================================" << std::endl;
	std::cout << "└─ 📄️ Standard output test" << std::endl;
	std::cout << robotomy;
	std::cout << "└─ 🧩 Form method" << std::endl;
	std::cout << "   └─ setTarget()" << std::endl;
	std::cout << "└─ ✍️ Sign test" << std::endl;
	testSign(patrick, robotomy);
	testSign(thierry, robotomy);
	testSign(brigitte, robotomy);
	testSign(kevin, robotomy);
	testSign(jeanmichel, robotomy);
	robotomy.beSigned(jeanmichel);
	std::cout << "└─ ⚒️️ Execute test" << std::endl;
	testExecute(patrick, robotomy);
	testExecute(thierry, robotomy);
	testExecute(brigitte, robotomy);
	testExecute(kevin, robotomy);
	testExecute(jeanmichel, robotomy);

	std::cout << "🎖️ Presidential Pardon Form ==================================" << std::endl;
	std::cout << "└─ 📄️ Standard output test" << std::endl;
	std::cout << pardon;
	std::cout << "└─ 🧩 Form method" << std::endl;
	std::cout << "   └─ setTarget()" << std::endl;
	std::cout << "└─ ✍️ Sign test" << std::endl;
	testSign(patrick, pardon);
	testSign(thierry, pardon);
	testSign(brigitte, pardon);
	testSign(kevin, pardon);
	testSign(jeanmichel, pardon);
	pardon.beSigned(jeanmichel);
	std::cout << "└─ ⚒️️ Execute test" << std::endl;
	testExecute(patrick, pardon);
	testExecute(thierry, pardon);
	testExecute(brigitte, pardon);
	testExecute(kevin, pardon);
	testExecute(jeanmichel, pardon);

	return 0;
}