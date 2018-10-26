#include "includes/fdf.h"

/* Vérification taille maps 500 / 20000 / +20000 */

t_print     checkmap(t_print print)
{
    if (print.len_y && print.len_x < 500)
    {
        print.milieux = 500;
        print.milieuy = 400;
        print.ecart = 25;
    }
    else if (500 < print.len_y && print.len_x < 20000)
    {
        print.milieux = 900;
        print.milieuy = 600;
        print.ecart = 10;
    }
    else if (print.len_y && print.len_x > 20000)
    {
        print.milieux = 1000;
        print.milieuxy = 650;
        print.ecart = 3;
    }
    print.x = 1;
    print.y = 1;
    print.z = 1;
    print.decalage = 1;
    return(print);
}

t_bresen	bresenham(t_coor a, t_coor b)
{
	t_bresen	point;

	point.dx = fabs((double)(b.x - a.x));
	point.dy = fabs((double)(b.y - a.y));
	if (a.x < b.x)
		point.sx = 1;
	else
		point.sx = -1;
	if (a.y < b.y)
		point.sy = 1;
	else
		point.sy = -1;
	if (point.dx > point.dy)
		point.stock = point.dx / 2;
	else
		point.stock = -point.dy / 2;
	return (point);
}

void        print(t_coor a, t_coor b, void *mlx_ptr, void *win_ptr)
{
    t_bresen    draw;

    draw = bresenham(a, b);
    while()
    {
        if (a.x == b.x && a.y == b.y)
            break;
        mlx_pixel_put(mlx_ptr, win_ptr, a.x, a.y, 0x0004FF); /* Print en bleu */
        a.x += draw.srcx;
        a.y += draw.srcy;
    }
}