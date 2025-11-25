/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 10:01:34 by amblanch          #+#    #+#             */
/*   Updated: 2025/11/25 09:31:01 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <time.h>
#include <stdlib.h>

class RobotomyRequestForm: virtual public AForm {
    public:
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(const std::string name);
        RobotomyRequestForm(const RobotomyRequestForm &other);
        RobotomyRequestForm   &operator=(const RobotomyRequestForm &other);
        void    executeForm() const;
    
        class NotRobotomized: public std::exception {
            public:
                virtual const char* what() const throw();
        };
};

#endif