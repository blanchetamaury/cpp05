/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:31:54 by amblanch          #+#    #+#             */
/*   Updated: 2025/11/25 09:03:53 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    Bureaucrat didier("didier", 150);

    std::cout << std::endl << "-----GradeIncrease------" << std::endl << std::endl;
    for (int i = 0; i < 151; i++) {
        try {
            didier.gradeIncrease();
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << "-----GradeDecrease------" << std::endl;
    for (int i = 5; i > 0; i--) {
        try {
            didier.gradeDecrease();
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
}