##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## my make file
##

NAME	=	binary

SRCS	= 	./src/main.c \

OBJS	=	$(SRCS:.c=.o)

NBR_OF_FILES := $(words $(SRCS))

CC = gcc

RM	=	rm -f

CFLAGS += -I ./include/
CFLAGS += -W -Wall -Wextra
CFLAGS += -L ./lib/ -lmy

all: $(NAME)

$(NAME): $(OBJS) lib
		@ echo "\033[1;36m[ FILES COMPILED ] \033[0m \033[1;34m$(NBR_OF_FILES)\033[0m"
		@ $(CC) -o $(NAME) $(OBJS) $(CFLAGS)
		@ echo "\033[1;34mBinary : \033[1;32m$(NAME)\033[1;34m created sucesfully.\033[0m"

clean:
		@ echo "\033[3;31mRemoving: \033[0m"
		@ echo "\033[3;31m$(OBJS)\033[0m" | tr ' ' '\n'
		@ $(RM) $(OBJS)

fclean:	clean
		@ echo "\033[3;31m./$(NAME)\033[0m"
		@ $(RM) $(NAME)

re: 	fclean all

lib:
		$(CC) -c lib/array.c -W -Wall -Wextra -I ./include/
		ar rc lib/libmy.a array.o

%.o:	%.c
		@ echo "\033[1;34m[ OK ]\033[0m Compiling" $<
		@ $(CC) -o $@ -c $< $(CFLAGS)

.PHONY: all clean fclean re lib