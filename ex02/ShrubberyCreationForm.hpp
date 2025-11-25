/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 10:00:58 by amblanch          #+#    #+#             */
/*   Updated: 2025/11/25 09:28:17 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm: public AForm {
    public:
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string name);
        ShrubberyCreationForm(const ShrubberyCreationForm &other);
        ShrubberyCreationForm   &operator=(const ShrubberyCreationForm &other);
        void    executeForm() const;
};

#endif