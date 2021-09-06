.PHONY: all clean fclean re 

CC = clang++
CFLAGS = -g -Wall -Wextra -Werror -I.
NAME = a.out

OBJS = $(SRC:.cpp=.o)

SRC = main.cpp \
		Animal.cpp \
		WrongAnimal.cpp \
		Cat.cpp \
		WrongCat.cpp \
		Dog.cpp 

INC = 	Animal.hpp \
		WrongAnimal.hpp \
		Cat.hpp \
		WrongCat.hpp \
		Dog.hpp 

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
