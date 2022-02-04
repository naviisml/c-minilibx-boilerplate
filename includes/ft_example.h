/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_example.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/23 00:27:03 by nismail       #+#    #+#                 */
/*   Updated: 2022/02/04 16:42:51 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_EXAMPLE_H
# define FT_EXAMPLE_H

# include <libft.h>
# include <mlx.h>

typedef struct s_server t_server;
typedef struct s_events t_events;
typedef struct s_sprite t_sprite;

void	server_initialize(t_server *so_long);
void	game_start(t_server *so_long);
int		game_error(t_server *so_long, char *error);
int		game_destroy(int keycode, t_server *so_long);
int		events_loop(int keycode, t_server *so_long);

int		rgba(int r, int g, int b, int a);
int		get_alpha(int rgba);
int		get_red(int rgba);
int		get_green(int rgba);
int		get_blue(int rgba);

void	*draw_sprite(t_server *so_long, t_sprite *image);

typedef struct s_server {
	void		*mlx;
	void		*window;
	int			width;
	int			height;
}				t_server;

typedef struct s_events {
	char		keycode;
	int			(*callback)();
}				t_events;

typedef struct s_sprite {
	char	*path;
	void	*image;
	int		width;
	int		height;
	int		x;
	int		y;
}			t_sprite;

#endif