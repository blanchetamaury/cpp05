/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaury <amaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:32:27 by amblanch          #+#    #+#             */
/*   Updated: 2025/11/24 22:45:27 by amaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <ostream>

class Form;

class Bureaucrat {

    private:
        const std::string   name;
        int                 grade;

    public:
                        Bureaucrat();
                        ~Bureaucrat();
                        Bureaucrat(std::string name, int grade);
                        Bureaucrat(const Bureaucrat &other);
        
        Bureaucrat      &operator=(const Bureaucrat &other);
        

        std::string     getName() const;
        int             getGrade() const;

        void            GradeDecrease(void);
        void            GradeIncrease(void);

        void            signForm(Form &form);
        
        class GradeTooHighException: public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException: public std::exception {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &other);

#endif