
CFLAGS			= -Wall -Wextra -Werror

NAME			= fdf

SRCS			= fdf_main.c \
				\
				gnl_utils/get_next_line.c  gnl_utils/get_next_line_utils.c \

$(NAME):
	@gcc $(CFLAGS) $(SRCS) \
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
