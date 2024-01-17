#include "metax.h"
/*
this function is to draw the shape that i designed 
but it can also draw circle if you give it the right structures
*/
void draw(void *mlx,void *win, int color,int x,int y,int c)
{
    t_point axis[2];
    int width;
    int height;
    
    width = 1440;
    height = 900;

    int center_x = (width / 2) - x;
    int center_y = (height / 2) - y;
    int radius = 350 - c;
    int points = 50;
    double angle = M_PI / points;

    for (int i = 0; i < points * 2; i++) {
        axis[0].x = center_x + radius * cos(i * angle);
        axis[0].y = center_y + radius * sin(i * angle);
        axis[1].x = center_x + radius * cos((i + 20) * angle);
        axis[1].y = center_y + radius * sin((i + 20) * angle);
        mlx_pixel_put(mlx, win, axis[0].x, axis[0].y, color);
        mlx_pixel_put(mlx, win, axis[1].x, axis[1].y, color);
        draw_line(mlx,win,axis,color);
    }
}
/*this function draws points in the window 
that can represents the stars*/
void draw_stars(void *mlx,void *win, int color)
{
    t_point axis[2];
    int width;
    int height;
    
    width = 1440;
    height = 900;

    int center_x = (width / 2);
    int center_y = (height / 2) ;
    int points = 100;

    for (int i = 0; i < points * 2; i++) {
        axis[0].x = center_x + (rand() % width) - (width / 2);
        axis[0].y = center_y + (rand() % height) - (height / 2);
        mlx_pixel_put(mlx, win, axis[0].x, axis[0].y, color);
        mlx_pixel_put(mlx, win, axis[1].x, axis[1].y, color);
    }
}
/*
this function for drawing the circle it can also just draw just some dots around that circle
*/
void draw_circle(void *mlx_ptr,void *win_ptr,int x,int y,int color)
{
    t_point axis[2];
    int width = 1440;
    int height = 900;

    int center_x = (width / 2) - x;// the x here is to change the x position from the center
    int center_y = (height / 2) - y;//the y here is to change the y position from the center
    int radius = 350;
    int points = 100;
    double angle = M_PI / points;
    for (int i = 0; i < points * 2; i++) {
        axis[0].x = center_x + radius * cos(i * angle);
        axis[0].y = center_y + radius * sin(i * angle);
        axis[1].x = center_x + radius * cos((i + 1) * angle);
        axis[1].y = center_y + radius * sin((i + 1) * angle);
        mlx_pixel_put(mlx_ptr, win_ptr, axis[0].x, axis[0].y, color);
        mlx_pixel_put(mlx_ptr, win_ptr, axis[1].x, axis[1].y, color);
        draw_line(mlx_ptr,win_ptr,axis,color);
    }
}

int main()
{
    void *mlx_ptr;
    void *win_ptr;
    int width = 1440;
    int height = 900;

    mlx_ptr = mlx_init();
    win_ptr = mlx_new_window(mlx_ptr, width, height, "MiniLibX Star");
    //draw_shape(mlx_ptr,win_ptr,0,50);
    draw_circle(mlx_ptr,win_ptr,0,50,GREEN2);
    mlx_loop(mlx_ptr);
    return 0;
}