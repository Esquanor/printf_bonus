
SRCS	=	./srcs/ft_printf.c\
			./srcs/ft_putnbr.c\
			./srcs/ft_print_flags.c\
			./srcs/ft_print_flags1.c\
			./srcs/ft_putstr.c\
			./srcs/ft_utils.c

SRCS_BONUS	=	./srcs/ft_printf_bonus.c\
			./srcs/ft_putnbr_bonus.c\
			./srcs/ft_print_flags_bonus.c\
			./srcs/ft_print_flags1_bonus.c\
			./srcs/ft_putstr_bonus.c\
			./srcs/ft_utils_bonus.c\
			./srcs/ft_utils1_bonus.c\
			./srcs/ft_utils2_bonus.c

HEADER		= ./headers/

OBJS	= ${SRCS:.c=.o}

OBJS_BONUS	= ${SRCS_BONUS:.c=.o}

NAME	= libftprintf.a

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -I ${HEADER} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		ar rcs ${NAME} ${OBJS}

clean:
		${RM} ${OBJS} ${OBJS_BONUS}

all:	${NAME}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

#REMOVE
test:	all	
	${CC} ${CFLAGS} -o test temp/main.c libftprintf.a

rmmandatory:
	${RM} ${OBJS} ${NAME}

bonus: rmmandatory ${OBJS_BONUS}
	ar rcs ${NAME} ${OBJS_BONUS}

.PHONY:	all clean fclean re
