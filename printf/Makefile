NAME = libftprintf.a
SRCS = ft_printf.c \
		ft_printchar.c \
		ft_printstr.c \
		ft_printnbr_base.c \
		ft_print_ptr_hexa.c \
		ft_utils.c \
		ft_print_hexa.c \
		ft_print_unsigned.c \
		ft_printnbr.c
		
OBJS = ${SRCS:.c=.o}
CC = cc
FLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -f


%.o: %.c
	${CC} ${FLAGS} -o $@ -c $^

all :	${NAME}

${NAME}:	${OBJS}
	${AR} ${NAME} ${OBJS}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re