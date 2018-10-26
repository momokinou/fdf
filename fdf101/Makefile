NAME        =   fdf
LIB_DIR     =   ./incl/
HEADER      =   fdf.h
FILENAMES   =   ft_parser.c ft_draw.c ft_env.c ft_bonus.c main.c

SOURCES     =   $(addprefix ./, $(FILENAMES))
OBJECTS     =   $(addprefix build/, $(FILENAMES:.c=.o))

LIBFT        =   ./libft
LIB_LNK     =   -L $(LIBFT) -l ft
LIB_INC     =   -I $(LIBFT)/libft.h

LMLX		=	minilibx_macos
LMX_LNK		=	-L $(LMLX) -l mlx
LMX_INC		=	-I $(LMLX)/mlx.h

FLG			=	
FLG_MX		=	-framework OpenGL -framework AppKit

.PHONY: all clean fclean re

all: $(NAME)

clean:
		rm -rf build/
		@$(MAKE) -C $(LIBFT) clean

fclean: clean
		rm -f $(NAME)
		@$(MAKE) -C $(LIBFT) fclean

re:
	    @$(MAKE) fclean
		@$(MAKE) all

build:
		mkdir build/

$(NAME): $(OBJECTS)
	    @$(MAKE) -C $(L_FT)
		gcc $(FLG) -I $(HEADER) $(OBJECTS) $(LIB_LNK) $(LMX_LNK) $(FLG_MX) -o $@

build/%.o: ./%.c | build
gcc $(FLG) $(LIB_INC) -I $(HEADER) -c $< -o $@