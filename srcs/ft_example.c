/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_example.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/23 00:26:25 by nismail       #+#    #+#                 */
/*   Updated: 2022/02/04 16:44:17 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ft_example.h>

/**
 * The render() function ...
 */
static int	render(t_server *server)
{
	return (0);
}

/**
 * example ...
 */
int	main(void)
{
	t_server	example;

	server_initialize(&example);
	mlx_hook(example.window, 2, (1L << 17), events_loop, &example);
	mlx_hook(example.window, 17, 1L << 17, game_destroy, &example);
	mlx_loop_hook(example.mlx, render, &example);
	mlx_loop(example.mlx);
	return (0);
}