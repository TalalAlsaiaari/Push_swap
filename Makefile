NAME		=	push_swap

SRCS		=	main.c ft_strsep.c special_atoi.c ft_intint.c sa.c sb.c ss.c ra.c rb.c rr.c rra.c rrb.c rrr.c \
				pa.c pb.c sort_three.c find_smallest.c is_sorted.c compare_stack.c sort_hundred.c 

OBJS		=	$(SRCS:.c=.o)

LIBFT		=	cd libft && make

FT_PRINTF	=	cd ft_printf && make

LIB			=	libft/libft.a ft_printf/libftprintf.a

GCC			=	gcc

FLAGS		=	-g -Wall -Werror -Wextra

all: comp_start $(NAME)

$(NAME): $(OBJS)
	$(GCC) $(FLAGS) $(OBJS) $(LIB) -o $(NAME)

comp_start:
	$(LIBFT)
	$(FT_PRINTF)

.c.o:
	$(GCC) $(FLAGS) -c $< -o $(<:.c=.o)

clean:
	rm -rf $(OBJS)
	cd ft_printf && make clean
	cd libft && make clean

fclean: clean
	rm -rf $(NAME)
	cd ft_printf && make fclean
	cd libft && make fclean

re: fclean all