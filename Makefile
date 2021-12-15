
SRCS	=	./srcs/ft_printf.c\
			./srcs/ft_putnbr.c\
			./srcs/ft_print_flags.c\
			./srcs/ft_print_flags1.c\
			./srcs/ft_putstr.c\
			./srcs/ft_utils.c\
			./srcs/ft_utils1.c

HEADER	= ./headers/

OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -I ${HEADER} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		ar rcs ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

all:	${NAME}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

#REMOVE
test:	all	
	${CC} ${CFLAGS} -o test temp/main.c libftprintf.a

bonus: ${NAME}

.PHONY:	all clean fclean re
