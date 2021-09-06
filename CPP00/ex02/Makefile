.PHONY: all clean fclean re 

CC = clang++
CFLAGS = -Wall -Wextra -Werror -I.
NAME = Account

OBJS = $(SRC:.cpp=.o)

SRC = tests.cpp \
		Account.cpp \

INC = Account.hpp 

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
	