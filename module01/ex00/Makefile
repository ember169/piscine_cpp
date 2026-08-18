NAME		:= zombie
CC			:= c++
FLAGS		:= -Wall -Wextra -Werror -std=c++98
INCLUDES	:= includes

SRCS		:= \
	srcs/newZombie.cpp \
	srcs/randomChump.cpp \
	srcs/Zombie.cpp \
	srcs/main.cpp

all:
	$(CC) $(FLAGS) $(SRCS) -I $(INCLUDES) -o $(NAME)

clean:
	rm zombie

fclean:
	rm zombie

re: fclean all
	@MAKE fclean
	@MAKE all