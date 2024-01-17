/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazan <yazan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:31:05 by yazan             #+#    #+#             */
/*   Updated: 2024/01/17 17:48:25 by yazan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "metax.h"

/*
this a functiom draws a line by using Bresenham's line algorithm
*/
void	draw_line(void *mlx_ptr, void *win_ptr,t_point axis[2],int color)
{
	int dx = abs(axis[1].x - axis[0].x), sx = axis[0].x < axis[1].x ? 1 : -1;
	int dy = -abs(axis[1].y - axis[0].y), sy = axis[0].y < axis[1].y ? 1 : -1;
	int err = dx + dy, e2;

	while (1)
	{
		mlx_pixel_put(mlx_ptr, win_ptr, axis[0].x, axis[0].y, color);
		if (axis[0].x == axis[1].x && axis[0].y == axis[1].y)break ;
		e2 = 2 * err;
		if (e2 >= dy)
		{
			err += dy;
			axis[0].x += sx;
		}
		if (e2 <= dx)
		{
			err += dx;
			axis[0].y += sy;
		}
	}
}
/*
this function is to produce a specific shape that i costumized */
void draw_shape(void *mlx_ptr,void *win_ptr,int x,int y)
{
    draw(mlx_ptr,win_ptr,BLUE2,x,y,0);
    draw(mlx_ptr,win_ptr,PURPLE,x,y,15);
    draw(mlx_ptr,win_ptr,WHITE,x,y,30);
    draw(mlx_ptr,win_ptr,WHITE,x,y,40);
    draw(mlx_ptr,win_ptr,WHITE,x,y,50);
    draw(mlx_ptr,win_ptr,WHITE,x,y,60); 
}
