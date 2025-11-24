/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaury <amaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:31:54 by amblanch          #+#    #+#             */
/*   Updated: 2025/11/24 22:56:58 by amaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


int main(void)
{
	std::cout << "-------- classic --------" << std::endl;

	try{
		Bureaucrat bureaucrat("Christophe", 5);
		std::cout << bureaucrat << std::endl;
		Form form("conctract42", 30, 10);
		std::cout << form << std::endl;
		bureaucrat.signForm(form);
	}
	catch (Bureaucrat::GradeTooHighException& e){std::cout << e.what() << std::endl;}
	catch (Bureaucrat::GradeTooLowException& e){std::cout << e.what() << std::endl;}
	catch (Form::GradeTooHighException& e){std::cout << e.what() << std::endl;}
	catch (Form::GradeTooLowException& e){std::cout << e.what() << std::endl;}

	std::cout << "-------- ERROR --------" << std::endl;

	std::cout << "\n-------- error1 --------" << std::endl;
	try{
		Bureaucrat bureaucrat("Jean", 100);
		std::cout << bureaucrat << std::endl;
		Form form("conctract42", 30, 10);
		std::cout << form << std::endl;
		bureaucrat.signForm(form);
        std::cout << form << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& e){std::cout << e.what() << std::endl;}
	catch (Bureaucrat::GradeTooLowException& e){std::cout  << e.what() << std::endl;}
	catch (Form::GradeTooHighException& e){std::cout << e.what() << std::endl;}
	catch (Form::GradeTooLowException& e){std::cout << e.what() << std::endl;}

	std::cout << "\n-------- error2 --------" << std::endl;
	try{
		Bureaucrat bureaucrat("Brice", 30);
		std::cout << bureaucrat << std::endl;
		Form form("Sudoku", 30, 10);
		std::cout << form << std::endl;
		bureaucrat.signForm(form);
        std::cout << form << std::endl;
		bureaucrat.GradeDecrease();
		bureaucrat.signForm(form);
		
	}
	catch (Bureaucrat::GradeTooHighException& e){std::cout << e.what() << std::endl;}
	catch (Bureaucrat::GradeTooLowException& e){std::cout  << e.what() << std::endl;}
	catch (Form::GradeTooHighException& e){std::cout << e.what() << std::endl;}
	catch (Form::GradeTooLowException& e){std::cout << e.what() << std::endl;}

	std::cout << "\n-------- extra --------" << std::endl;
	try{
		Bureaucrat bureaucrat("Fabrice", 50);
		std::cout << bureaucrat << std::endl;
		Form form("chess", 50, 10);
		std::cout << form << std::endl;
		bureaucrat.signForm(form);
		bureaucrat.signForm(form);
		
	}
	catch (Bureaucrat::GradeTooHighException& e){std::cout << e.what() << std::endl;}
	catch (Bureaucrat::GradeTooLowException& e){std::cout  << e.what() << std::endl;}
	catch (Form::GradeTooHighException& e){std::cout << e.what() << std::endl;}
	catch (Form::GradeTooLowException& e){std::cout << e.what() << std::endl;}
}