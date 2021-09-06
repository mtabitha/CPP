.PHONY: all clean fclean re 

CC = clang++
CFLAGS = -g -Wall -Wextra -Werror -Wshadow -Wno-shadow -I.
NAME = a.out

OBJS = $(SRC:.cpp=.o)

SRC = main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \
		DiamondTrap.cpp

INC =  ClapTrap.hpp \
		ScavTrap.hpp \
		FragTrap.hpp \
		DiamondTrap.hpp

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
