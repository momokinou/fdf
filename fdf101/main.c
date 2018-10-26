#include "includes/fdf.h"

int     check_open_file(int fd, char **map)
{
    char    buf[1];

    errno = 0;
    if ((fd = open(av[1], O_RDONLY) < 0)
        {
        ft_putendl("Invalid file."); /* Sert à afficher l'erreur si la map n'est pas correcte */
        exit(1);
        }

    read(fd, buf, 1);
    if ((read(fd, buf, 1)) = -1)
        {
            perror("fdf "); /* Sert à afficher les erreurs si il y en a de présentes */
            exit(1);
        }
    return(fd);
}

int     main(int ac, char **av)
{
    int     fd;
    int     i;
    char    *l;
    t_print print;

    fd = 0;
    i = 0;
    l = NULL;
    if (ac != 2)
    {
        ft_putendl("Usage: ./fdf [MAP].fdf");
        return (0);
    }

    print.mlx_ptr = mlx_init();
    print.win_ptr = mlx_new_window(print.mlx_ptr, WIDTH, HEIGHT, "FDF");
    fd = check_open_file(fd, av)
    mlx_key_hook(t_print.win_ptr, ft_kyhook, (void *)print)
    mlx_loop(print.mlx_ptr)
    return(0);
}