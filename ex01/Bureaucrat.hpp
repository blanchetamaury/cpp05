/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:32:27 by amblanch          #+#    #+#             */
/*   Updated: 2025/11/24 10:34:07 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <ostream>


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