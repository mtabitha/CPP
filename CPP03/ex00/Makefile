.PHONY: all clean fclean re 

CC = clang++
CFLAGS = -Wall -Wextra -Werror -I.
NAME = a.out

OBJS = $(SRC:.cpp=.o)

SRC = main.cpp \
		ClapTrap.cpp 

INC =  ClapTrap.hpp 

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
