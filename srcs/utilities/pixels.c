/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pixels.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/23 00:26:25 by nismail       #+#    #+#                 */
/*   Updated: 2022/02/06 14:02:57 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ft_example.h>

/*
 * The pixel_get() function ...
 */
unsigned int	pixel_get(t_sprite *texture, int x, int y)
{
	return (*(unsigned int *)
		(texture->data + (x * texture->bpp / 8 + y * texture->size_l)));
}

/*
 * The pixel_draw() function ...
 */
void	pixel_draw(t_sprite *texture, int color, int x, int y)
{
	char	*dst;

	dst = texture->data + (x * texture->bpp / 8 + y * texture->size_l);
	*(unsigned int *)dst = color;
}
