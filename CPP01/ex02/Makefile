.PHONY: all clean fclean re 

CC = clang++
CFLAGS = -Wall -Wextra -Werror 
NAME = Brain

OBJS = $(SRC:.cpp=.o)

SRC = main.cpp 

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
