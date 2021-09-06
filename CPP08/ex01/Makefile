.PHONY: all clean fclean re 

CC = clang++
CFLAGS = -g  -I.
NAME = span

OBJS = $(SRC:.cpp=.o)

SRC = main.cpp \
		span.cpp

INC = span.hpp

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