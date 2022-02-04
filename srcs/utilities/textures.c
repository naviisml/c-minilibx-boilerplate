/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   textures.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/23 00:26:25 by nismail       #+#    #+#                 */
/*   Updated: 2022/02/04 16:21:50 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ft_example.h>

void	*texture_draw(t_server *server, t_sprite *img)
{
	void	*image;
	int		width;
	int		height;

	image = mlx_xpm_file_to_image(server->mlx, img->path, &width, &height);
	mlx_put_image_to_window(server->mlx, server->window, img->image, img->y, img->x);
	img->image = image;
	img->width = width;
	img->height = height;
	return (image);
}
