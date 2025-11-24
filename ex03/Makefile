CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -g -std=c++98

SRC = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp

OBJ = $(SRC:%.cpp=%.o)

NAME = ex03

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) -o $(NAME) $^ $(CXXFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re