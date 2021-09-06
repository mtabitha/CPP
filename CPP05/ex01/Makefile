.PHONY: all clean fclean re 

CC = clang++
CFLAGS = -g -Wall -Wextra -Werror -I.
NAME = a.out

OBJS = $(SRC:.cpp=.o)

SRC = main.cpp \
		Bureaucrat.cpp \
		Form.cpp

INC = Bureaucrat.hpp \
		Form.hpp

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