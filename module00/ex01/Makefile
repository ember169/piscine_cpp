NAME		:= phonebook
CC			:= c++
FLAGS		:= -Wall -Wextra -Werror -std=c++98
INCLUDES	:= includes

SRCS		:= \
	srcs/contact.cpp \
	srcs/phonebook.cpp \
	srcs/main.cpp

all:
	$(CC) $(FLAGS) $(SRCS) -I $(INCLUDES) -o $(NAME)

clean:
	rm phonebook

fclean:
	rm phonebook

re: fclean all
	@MAKE fclean
	@MAKE all