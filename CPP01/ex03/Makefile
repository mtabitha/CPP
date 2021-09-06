.PHONY: all clean fclean re 

CC = clang++
CFLAGS = -Wall -Wextra -Werror -I.
NAME = Human

OBJS = $(SRC:.cpp=.o)

SRC = main.cpp \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp \


INC = Weapon.hpp \
		HumanA.hpp \
		HumanB.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

