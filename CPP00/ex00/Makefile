.PHONY: all clean fclean re 

CC = clang++
CFLAGS = -Wall -Wextra -Werror
NAME = megaphone

SRC = megaphone.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(NAME)

fclean:
	rm -f $(NAME)

re:
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)