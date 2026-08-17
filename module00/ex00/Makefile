NAME		:= megaphone
CCP			:= c++
FLAGS		:= -Wall -Wextra -Werror -std=c++98

SRCS		:= megaphone.cpp

all:
	$(CCP) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm megaphone

fclean:
	rm megaphone

re: fclean all
	@MAKE fclean
	@MAKE all