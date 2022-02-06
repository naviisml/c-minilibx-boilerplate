/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_example.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/23 00:27:03 by nismail       #+#    #+#                 */
/*   Updated: 2022/02/06 14:03:33 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_EXAMPLE_H
# define FT_EXAMPLE_H

# include <libft.h>
# include <mlx.h>

typedef struct s_server t_server;
typedef struct s_events t_events;
typedef struct s_sprite t_sprite;

// Engine...
void			server_initialize(t_server *so_long);
void			game_start(t_server *so_long);
int				game_error(t_server *so_long, char *error);
int				game_destroy(int keycode, t_server *so_long);
int				events_loop(int keycode, t_server *so_long);

// Utilities...
unsigned int	rgba(int r, int g, int b, int a);
int				get_alpha(int rgba);
int				get_red(int rgba);
int				get_green(int rgba);
int				get_blue(int rgba);
t_sprite		sprite_create(t_server *server, char *path);
void			sprite_put(t_server *server, t_sprite *image, int x, int y);
void			sprite_paint(t_server *server, t_sprite *image, int x, int y);
void			sprite_destroy(t_server *server, t_sprite *image);
void			sprite_pixel_put(t_sprite *image, int color, int x, int y);
unsigned int	pixel_get(t_sprite *texture, int x, int y);
void			pixel_draw(t_sprite *image, int color, int x, int y);

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