/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 10:01:06 by amblanch          #+#    #+#             */
/*   Updated: 2025/11/24 17:55:19 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("", 145, 137) {
    std::cout << "Default constructor Shrubbery Called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "Default destructor Shrubbery Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string newname): AForm(newname, 145, 137) {
    std::cout << "Assigment constructor Shrubbery Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other): AForm(other.getName(), 145, 137) {
    std::cout << "Copy constructor Shrubbery Called" << std::endl;
}

ShrubberyCreationForm   &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other){
    if (this != &other) {
        AForm::operator=(other);
    }
    return *this;
}

void        ShrubberyCreationForm::executeForm() const {
    std::string tmp = getName() + "_shrubbery";
    
    std::ofstream fs(tmp.c_str());
    if (!fs)
        std::cout << "can't open file" << std::endl;
    else {
        for (int i = 0; i < 10; i++) {
            fs << "    oxoxoo    ooxoo" << std::endl
                << "  ooxoxo oo  oxoxooo" << std::endl
                << " oooo xxoxoo ooo ooox" << std::endl
                << " oxo o oxoxo  xoxxoxo" << std::endl
                << "  oxo xooxoooo o ooo" << std::endl
                << "    ooo\\oo\\  /o/o" << std::endl
                << "        \\  \\/ /" << std::endl
                << "         |   /" << std::endl
                << "         |  |" << std::endl
                << "         | D|" << std::endl
                << "         |  |" << std::endl
                << "         |  |" << std::endl
                << "  ______/____\\____" << std::endl << std::endl;
        }
        fs.close();
    }
}

std::ostream &operator<<(std::ostream &out, ShrubberyCreationForm &other) {
    if (other.getSign())
        out << other.getName() << ", ShrubberyCreationForm is sign.";
    else
        out << other.getName() << ", ShrubberyCreationForm is not sign.";
    return out;
}

