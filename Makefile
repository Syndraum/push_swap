OBJDIR		= objects
INCDIR		= ./includes
LIBFTDIR	= libft
LIBFTINCDIR	= ./${LIBFTDIR}/includes


LIBFT_FLAGS	= -L./${LIBFTDIR}/ -lft

SRCS	=	error.c \
			stack.c \
			swap.c \
			push.c \
			rotate.c \
			reverse_rotate.c \
			hash.c \
			init.c

APPSRCS		= ${SRCS} push_swap.c
CHECKSRCS	= ${SRCS} checker.c
ALLSRCS		= ${SRCS} push_swap.c checker.c

APPOBJS		= $(addprefix ${OBJDIR}/, ${APPSRCS:.c=.o})
CHECKOBJS	= $(addprefix ${OBJDIR}/, ${CHECKSRCS:.c=.o})
OBJS		= $(addprefix ${OBJDIR}/, ${ALLSRCS:.c=.o})
INCLUDE		= $(addprefix ${INCDIR}/, header.h)

CC		= clang
CFLAGS	= -Wall -Wextra -Werror -I $(INCDIR) -I ${LIBFTINCDIR}

RM		= rm -f

NAME		= push_swap
NAMECHECKER	= checker

all:	${NAME} ${NAMECHECKER}

${OBJDIR}/%.o : ./%.c
	${CC} ${CFLAGS} -c -o $@ $<

${OBJDIR}:
	mkdir -p ${OBJDIR}

${OBJS} : ${INCLUDE} | ${OBJDIR} ./${LIBFTDIR}/libft.a

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${APPOBJS} ${LIBFT_FLAGS} -o ${NAME}

${NAMECHECKER}:	${CHECKOBJS} 
	${CC} ${CFLAGS} ${CHECKOBJS} ${LIBFT_FLAGS} -o ${NAMECHECKER}

./${LIBFTDIR}/libft.a:
	${MAKE} -C ${LIBFTDIR}

clean:
	${RM} ${OBJS}
	${MAKE} -C ${LIBFTDIR} clean

fclean:	clean
	${RM} ${NAME}
	${RM} ${NAMECHECKER}
	${MAKE} -C ${LIBFTDIR} fclean

re:	fclean all

.PHONY: all clean fclean re