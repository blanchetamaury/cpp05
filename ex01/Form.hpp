/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:39:13 by amblanch          #+#    #+#             */
/*   Updated: 2025/11/24 09:58:00 by amblanch         ###   ########.fr       */
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
                            Form(const std::string name, bool sign, const int requiredsign, const int requireexec);
                            Form(const Form &other);
        Form                &operator=(const Form &other);

        void                beSigned(Bureaucrat &other);
        void                signForm(Bureaucrat &other);

        class GradeTooHighException: public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException: public std::exception {
            public:
                virtual const char* what() const throw();
        };  
};

#endif //Form_HPP