.PHONY: all clean fclean re 

CC = clang++
CFLAGS = -g -Wall -Wextra -Werror -I.
NAME = a.out

OBJS = $(SRC:.cpp=.o)

SRC = main.cpp \
		Bureaucrat.cpp \
		Form.cpp \
		PresidentialPardonForm.cpp \
		ShrubberyCreationForm.cpp \
		RobotomyRequestForm.cpp \
		Intern.cpp

INC = Bureaucrat.hpp \
		Form.hpp \
		PresidentialPardonForm.hpp \
		ShrubberyCreationForm.hpp \
		RobotomyRequestForm.hpp \
		Intern.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

%.o : %.cpp $(INC)
	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)