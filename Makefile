SRCS = srcs/execution/main.c\

OBJS = $(SRCS:.c=.o)

INCLUDE = includes

NAME = cub3D

LIBRARY = utils/libft/libft.a\
MLX42/libmlx42.a\

LIBDIR = -C utils/libft

MAKELIB = make $(LIBDIR)

CC = cc

FLAGS = -Wall -Wextra -Werror -I$(INCLUDE)

ADDFLAGS =  -ldl -lglfw -pthread -lm

all : $(NAME)

bonus : $(NAME)

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME) : $(LIBRARY) $(OBJS)
	$(CC) $(FLAGS) $(OBJS) $(ADDFLAGS) $(LIBRARY) -o $(NAME)

$(LIBRARY) :
	$(MAKELIB)

clean :
	rm -rf $(OBJS)
	make clean $(LIBDIR)

fclean : clean
	rm -rf $(NAME)
	make fclean $(LIBDIR)

re : fclean all

.PHONY: all clean fclean re
