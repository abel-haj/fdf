
CFLAGS			= -Wall -Wextra -Werror

NAME			= fdf

SRCS			= fdf_main.c \
				\
				gnl/get_next_line.c  gnl/get_next_line_utils.c \

$(NAME):
	@make -C ./libft
	@gcc $(CFLAGS) $(SRCS) \
	-L ./libft -lft \
	-I /usr/local/include -L /usr/local/bin -lmlx \
	-framework OpenGl -framework AppKit libmlx.dylib \
	-o $(NAME) && \
	echo "Building..."

all : $(NAME)

clean:
	@rm -rf *.o && echo "Cleaning..."

fclean: clean
	@rm -rf $(NAME) && echo "Wiping..."

re: fclean all
