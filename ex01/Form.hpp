/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaury <amaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:39:13 by amblanch          #+#    #+#             */
/*   Updated: 2025/11/24 22:42:43 by amaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Form {
    private:
        const std::string   name;
        bool                sign;
        const int           requiredsign;
        const int           requiredexec;
    public:
                            Form();
                            ~Form();
                            Form(const std::string name, const int requiredsign, const int requireexec);
                            Form(const Form &other);
        Form                &operator=(const Form &other);

        void                beSigned(Bureaucrat &other);

        const std::string   getName() const;
        bool                getSign() const;

        class GradeTooHighException: public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException: public std::exception {
            public:
                virtual const char* what() const throw();
        };  
};


std::ostream &operator<<(std::ostream &out, Form &other);

#endif //Form_HPP