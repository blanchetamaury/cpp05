/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:39:13 by amblanch          #+#    #+#             */
/*   Updated: 2025/11/25 09:31:54 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_HPP
#define Form_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class AForm {
    private:
        const std::string   name;
        bool                sign;
        const int           requiredsign;
        const int           requiredexec;
    public:
                            AForm();
        virtual             ~AForm();
                            AForm(const std::string name,const int requiredsign, const int requireexec);
                            AForm(const AForm &other);
        AForm               &operator=(const AForm &other);

        const std::string   getName() const;
        bool                getSign() const;
        int                 getRequiredSign() const;
        int                 getRequiredExec() const;

        void                beSigned(Bureaucrat &other);

        void                execute(Bureaucrat const & executor) const;
        virtual void        executeForm() const = 0;
        class GradeTooHighException: public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException: public std::exception {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream &operator<<(std::ostream &out, AForm &other);

#endif //Form_HPP