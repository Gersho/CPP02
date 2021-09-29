SRCS		= Fixed.cpp main.cpp


OBJS			= $(SRCS:.cpp=.o)

NAME			= fixed
CC				= clang++
RM				= rm -f
CFLAGS			= --std=c++98 -Wall -Wextra -Werror

all:			$(NAME)

%.o: 			%.cpp	Fixed.hpp
				$(CC) $(CFLAGS) -c $< -o $@

$(NAME):		$(OBJS) Fixed.hpp
				$(CC) $(CFLAGS) -IFixed.hpp -o $(NAME) $(OBJS)

clean:			
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:			fclean all

.PHONY:		re fclean clean all