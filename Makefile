OBJDIR		= objects
INCDIR		= ./includes
LIBFTDIR	= libft
LIBFTINCDIR	= ./${LIBFTDIR}/includes


LIBFT_FLAGS	= -L./${LIBFTDIR}/ -lft

SRCS	=	push_swap.c \
			error.c \
			stack.c \
			swap.c \
			push.c \
			rotate.c

OBJS	= $(addprefix ${OBJDIR}/, ${SRCS:.c=.o})
INCLUDE	= $(addprefix ${INCDIR}/, header.h)

CC		= clang
CFLAGS	= -Wall -Wextra -Werror -I $(INCDIR) -I ${LIBFTINCDIR}

RM		= rm -f

NAME	= push_swap
NAME2	= checker

all:	${NAME}

${OBJDIR}/%.o : ./%.c
	${CC} ${CFLAGS} -c -o $@ $<

${OBJDIR}:
	mkdir -p ${OBJDIR}

${OBJS} : ${INCLUDE} | ${OBJDIR} ./${LIBFTDIR}/libft.a

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} ${LIBFT_FLAGS} -o ${NAME}

./${LIBFTDIR}/libft.a:
	${MAKE} -C ${LIBFTDIR}

clean:
	${RM} ${OBJS}
	${MAKE} -C ${LIBFTDIR} clean

fclean:	clean
	${RM} ${NAME}
	${MAKE} -C ${LIBFTDIR} fclean

re:	fclean all

.PHONY: all clean fclean re