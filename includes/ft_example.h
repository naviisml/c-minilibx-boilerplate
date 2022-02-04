/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_example.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/23 00:27:03 by nismail       #+#    #+#                 */
/*   Updated: 2022/01/20 12:34:30 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_EXAMPLE_H
# define FT_EXAMPLE_H

# include "libft.h"

typedef struct s_server t_server;
void	game_start(t_server *so_long);
int		game_error(t_server *so_long, char *error);
int		game_destroy(int keycode, t_server *so_long);

int		rgba(int r, int g, int b, int a);
int		get_alpha(int rgba);
int		get_red(int rgba);
int		get_green(int rgba);
int		get_blue(int rgba);


typedef struct s_server {
	void		*mlx;
	void		*window;
	int			width;
	int			height;
}				t_server;

#endif