/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   server.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/23 00:26:25 by nismail       #+#    #+#                 */
/*   Updated: 2022/02/04 16:04:09 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ft_example.h>

/**
 * The server_initialize() function ..
 */
void	server_initialize(t_server *server)
{
	server->mlx = NULL;
	server->window = NULL;
	server->width = 0;
	server->height = 0;
}
