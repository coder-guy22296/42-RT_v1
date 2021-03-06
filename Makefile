NAME = rtv1
SRC =   src/main.c
OFILES = $(SRC:.c=.o)

LIBFT = lib/libft/
MLX = lib/minilibx/
#LIBG = lib/libg/

LIBS = -L $(LIBFT) -lft
LIBS += -L $(MLX) -lmlx -framework OpenGL -framework AppKit
#LIBS += -L $(LIBG) -lgraphics

LIBI = -I $(LIBFT)
LIBI += -I $(MLX)
#LIBI += -I $(LIBG)

all: $(NAME)

$(NAME): dependencies
	gcc -Wall -Wextra -Werror -c $(SRC) $(LIBI)
	gcc -o $(NAME) $(OFILES) $(LIBS)

clean:
	rm -rf $(OFILES)
	make -C $(MLX) clean
#	make -C $(LIBG) clean
	make -C $(LIBFT) clean

fclean: clean
	rm -f $(NAME)
#	make -C $(LIBG) fclean
	make -C $(LIBFT) fclean

re: fclean all

dependencies:
	make -C $(MLX)
	make -C $(LIBFT)
#	make -C $(LIBG)
