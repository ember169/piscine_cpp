NAME		:= ex03
CC			:= c++
CFLAGS		:= -Wall -Wextra -Werror -std=c++98

INCLUDES	:= includes
SRCS		:= \
	srcs/HumanA.cpp \
	srcs/HumanB.cpp \
	srcs/Weapon.cpp \
	srcs/main.cpp

all:
	$(CC) $(CFLAGS) -I $(INCLUDES) $(SRCS) -o $(NAME)

clean:
	rm ex03

re:
	@MAKE clean
	@MAKE all
