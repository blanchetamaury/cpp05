/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaury <amaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:31:54 by amblanch          #+#    #+#             */
/*   Updated: 2025/11/24 22:15:12 by amaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    Bureaucrat didier("didier", 5);

    std::cout << "-----GradeDecrease------" << std::endl;
    for (int i = 5; i > 0; i--) {
        try {
            didier.GradeDecrease();
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << std::endl << "-----GradeIncrease------" << std::endl << std::endl;
    for (int i = 0; i < 151; i++) {
        try {
            didier.GradeIncrease();
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
}