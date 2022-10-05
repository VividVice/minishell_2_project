##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## make of the minishell2
##

NAME	= 	mysh

CC		= 	gcc

FOLDER	=	sources
LIB 	=	lib/my

SRCS	=	$(LIB)/my_strncmp.c			\
			$(LIB)/my_strcmp.c			\
			$(LIB)/my_strlen.c			\
			$(LIB)/my_strlen_array.c		\
			$(FOLDER)/my_getenv.c			\
			$(FOLDER)/my_unsetenv.c			\
			$(FOLDER)/my_setenv.c			\
			$(LIB)/my_calloc_array.c		\
			$(LIB)/my_calloc_str.c		\
			$(LIB)/my_strdup.c			\
			$(FOLDER)/my_tabdup.c			\
			$(LIB)/my_putstr.c			\
			$(FOLDER)/my_env.c				\
			$(FOLDER)/single_old.c			\
			$(FOLDER)/my_builtin_cd.c		\
			$(LIB)/my_strcat.c			\
			$(LIB)/my_strcat_path.c		\
			$(FOLDER)/my_access.c			\
			$(FOLDER)/my_cmd.c				\
			$(LIB)/clean_string.c		\
			$(FOLDER)/my_pipe.c				\
			$(FOLDER)/is_builtin.c			\
			$(FOLDER)/my_error.c			\
			$(LIB)/my_free.c				\
			$(FOLDER)/my_exit_cmd.c			\
			$(FOLDER)/additional.c			\
			$(FOLDER)/my_input.c			\
			$(LIB)/write_my_error.c		\
			$(FOLDER)/my_strtab.c			\
			$(FOLDER)/single_env.c			\
			$(FOLDER)/handling_cmd.c		\
			$(LIB)/replace_char.c		\
			$(FOLDER)/main.c

CFLAGS	=	-g3 -I./include -Wall -Wextra

OBJS	=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(OBJS) -o $(NAME)

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY: all clean fclean re
