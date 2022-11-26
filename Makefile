NAME = libftprintf.a
INC = ft_printf.h
MAN_SRCS = ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_putnbr_un.c ft_putnbr_x.c print_ad.c \

MAN_OBJS = $(MAN_SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror
AR = ar -r
RM = rm -f

all : $(NAME)
$(NAME) : $(MAN_OBJS)
	$(AR) $(NAME) $(MAN_OBJS)

%.o:%.c $(INC)
	$(CC) $(CFLAGS) -c $<

clean: 
	$(RM) $(MAN_OBJS)

fclean:clean
	$(RM) $(NAME)

re : fclean all