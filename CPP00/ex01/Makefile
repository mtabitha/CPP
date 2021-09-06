.PHONY: all clean fclean re 

CC = clang++
CFLAGS = -Wall -Wextra -Werror -I.
NAME = PhoneBook

OBJS = $(SRC:.cpp=.o)

SRC = main.cpp \
		Contact.cpp \
		PhoneBook.cpp	

INC = Contact.hpp \
		PhoneBook.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
