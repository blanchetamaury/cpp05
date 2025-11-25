/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:31:54 by amblanch          #+#    #+#             */
/*   Updated: 2025/11/25 09:21:46 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


int main(void)
{
	std::cout << "-------- classic --------" << std::endl;
	{
		Bureaucrat bureaucrat("Christophe", 5);
		std::cout << bureaucrat << std::endl;
		Form form("contrat42", 30, 10);
		std::cout << form << std::endl;
		bureaucrat.signForm(form);
	}
		
	std::cout << "-------- ERROR --------" << std::endl;

	std::cout << "\n-------- error1 --------" << std::endl;
	{
		Bureaucrat bureaucrat("Jean", 100);
		std::cout << bureaucrat << std::endl;
		Form form("contrat42", 30, 10);
		std::cout << form << std::endl;
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
	}

	std::cout << "\n-------- error2 --------" << std::endl;
	{
		Bureaucrat bureaucrat("Brice", 30);
		std::cout << bureaucrat << std::endl;
		Form form("Sudoku", 30, 10);
		std::cout << form << std::endl;
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
		bureaucrat.gradeDecrease();
		bureaucrat.signForm(form);
	}

	std::cout << "\n-------- extra --------" << std::endl;
	{
		Bureaucrat bureaucrat("Fabrice", 50);
		std::cout << bureaucrat << std::endl;
		Form form("Partenariat 42 x Chess.com", 50, 10);
		std::cout << form << std::endl;
		bureaucrat.signForm(form);
		bureaucrat.signForm(form);
	}
}