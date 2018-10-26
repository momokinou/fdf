#ifndef FDF_H
# define FDF_H

/* Includes */
# include "../minilibx_macos/mlx.h"
# include "../libft/libft.h"
# include <math.h>
# include <errno.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

/* Keys */
# define ESC 53
# define LESS 27
# define MORE 24
# define LEFT 123
# define RIGHT 124
# define DOWN 125
# define UP 126
# define W 13
# define X 7
# define Z 6
# define A 0
# define S 1
# define D 2


/* Dimensions fenêtre */
# define WIDTH 1800
# define HEIGHT 1200

/* Structures */
typedef struct  s_coor
{
    int     x;
    int     y;
    int     z;
}               t_coor;

typedef struct  s_print
{
    void    *mlx_ptr;
    void    *mlx_win;
    int     len_x;
    int     len_y;
    int     x;
    int     y;
    int     z;
    int     milieux;
    int     milieuy;
    int     ecart;
    int     decalage;
}               t_print;

typedef struct  s_bresen
{
	int				dstx;
	int				dsty;
	int				stock;
	int				srcx;
	int				srcy;
}               t_bresen;

/* Functions */
int     check_open_file(int fd, char **map);
#endif