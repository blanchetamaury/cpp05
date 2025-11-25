/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 10:23:20 by amblanch          #+#    #+#             */
/*   Updated: 2025/11/25 09:31:19 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class PresidentialPardonForm: public AForm {
    public:
        PresidentialPardonForm();
        ~PresidentialPardonForm();
        PresidentialPardonForm(const std::string name);
        PresidentialPardonForm(const PresidentialPardonForm &other);
        PresidentialPardonForm   &operator=(const PresidentialPardonForm &other);
        void    executeForm() const;
};



#endif