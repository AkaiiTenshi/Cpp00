NAME	= account

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
SRCS	= Account.cpp tests.cpp
OBJS	= $(SRCS:.cpp=.o)
INCLUDES = -I Account.hpp

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(INCLUDES) -o $(NAME) $(OBJS)

%.o: %.cpp
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re


