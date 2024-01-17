/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   star.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazan <yazan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 01:03:24 by yazan             #+#    #+#             */
/*   Updated: 2024/01/16 20:46:28 by yazan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STAR_H
#define STAR_H

#include "minilibx/mlx.h"
#include <math.h>
#include <stdlib.h>

# define RED 0xc1272d
# define GREEN 0x33cc55
# define GREEN2 0X93dc9a
# define FUCSIA 0xff255c
# define BLUE 0x1B8EFA
# define SKYBLUE 0x0000FF
# define CARBON 0x151515
# define WHITE 0xBBBBBB
# define PURPLE 0x9A1F6A
# define BRICK_RED 0xC2294E
# define FLAMINGO 0xEC4B27
# define ORANGE 0xEF8633
# define SAFFRON 0xF3AF3D
# define BLUE2 0X3784f1

typedef struct s_point
{
    int x;
    int y;
} t_point; 

void	draw_line(void *mlx_ptr, void *win_ptr,t_point axis[2],int color);
void draw_shape(void *mlx_ptr,void *win_ptr,int x,int y);
void draw(void *mlx,void *win, int color,int x,int y,int c);
#endif