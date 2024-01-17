<h1 align="center">MiniLibX Graphical Programming Tutorial:
  Drawing Circles and Creative Shapes 🖥️
</h1>

Welcome to this hands-on tutorial, where i delve into the world of graphical programming using the MiniLibX library. MiniLibX is a simple yet powerful library used in the School 42 curriculum, renowned for its approach to teaching software engineering and computer science. This tutorial is designed for beginners and intermediate programmers who are looking to enhance their skills in graphical programming.

In this tutorial, we will explore the fundamentals of drawing basic shapes using MiniLibX. We'll focus on drawing circles and how to manipulate their properties to create various designs. You will learn how to:

- ### Initialize a window using MiniLibX.
- ### Draw a circle in the window and understand the mathematics behind its formation.
- ### Modify the circle's position and size.
- ### utilize line drawing functions to craft different shapes and patterns.

## notes 🚨:
- make sure to check my repo about minilibx for more information 
[`click`](https://github.com/yazan-metax/minilibX)
- feel free to do whatever you want with the code, by changing the inputs and the valuse like the radius ,points and etc, also multiple call of the functions with different parameters ,you will be able to draw more shapes than just circle, `discover it yourself`
- this code doesn't follow the norms that required by the school, it is made for tutorial purposes .
- the purpose of this code is to make it easy for people who want to understand the logic of drawing any thing on a window using minilibx before they jump into bigger projects like [`FDF`](https://github.com/yazan-metax/FDF).
- 🚩 when you look at the code you might find that some of the function they have kind of the same code but with different variables values and also with different input that can result on different functionality  at the  beginning just focus on the `draw_circle()` function , once you understand it the other ones will be easy to understand .

<img src="https://github.com/yazan-metax/draw_with_minilibx/blob/main/image2/Screenshot%202024-01-17%20at%2017.40.28.png">

## 1) how to Initialize a window using MiniLibX 🤔:

### -  Initialization of the MiniLibX Instance.
The first step is to initialize the MiniLibX library. This is done using the mlx_init() function. This function sets up the connection to the display (typically the X server on Unix systems) and prepares the library for use. It returns a pointer to the newly created MiniLibX instance, often referred to as (mlx_ptr).

```
void *mlx_ptr;
mlx_ptr = mlx_init();

```
### - Creating a New Window:

Once you have your MiniLibX instance, you can create a window using the `mlx_new_window()` function. This function requires the MiniLibX instance pointer, the desired width and height of the window, and a title for the window as arguments.

The function returns a pointer to the newly created window, referred to as win_ptr. This pointer is used in subsequent calls to MiniLibX functions that operate on the window.

```
void *win_ptr;
int width = 1440;
int height = 900;
win_ptr = mlx_new_window(mlx_ptr, width, height, "Window Title");

```
- ### Displaying the Window
Once the window is created, it can be displayed and interacted with. However, to keep the window open and responsive, you need to enter the MiniLibX main loop using the mlx_loop() function. This function keeps your application running and allows it to respond to events like keyboard and mouse inputs.
```
mlx_loop(mlx_ptr);

```
## now we can move to the function that responsible for drawing the circle 🟢:

```
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
        draw_line(mlx_ptr,win_ptr,axis,color);
    }
}
```
 ## Algorithm Explanation:
 
- ### Window Dimensions:
The function defines the width and height of the window where the circle will be drawn. These are set to `1440` and `900` respectively,you can freely change them they way you want.
- ### circle Center Calculation:
The center of the circle (center_x, center_y) is calculated based on the window's dimensions and the provided x and y offsets. This allows the circle's position to be dynamically changed within the window.

- ### Circle Properties:
1) The radius of the circle is set to `350`.
2) The number of points `(points)` used to draw the circle is `100`. This defines the smoothness of the circle. More points result in a smoother circle.

- ### Angle Calculation:
The angle increment (`angle`) is calculated based on the number of points. This determines the spacing between each point on the circle's circumference.

- ### Drawing the Circle:
1) The function iterates over each point, calculating the `x` and `y` coordinates for each segment of the circle using trigonometric functions (`cos` and `sin`).
2) `mlx_pixel_put` is used to place pixels at these coordinates in the specified color,NOTE: usually we use a costume function that works more efficiently than this one.

- ### another notes 😊:
1) This function draws a circle by connecting multiple short lines, giving the appearance of a continuous curve.
2) The `x` and `y` parameters allow the circle to be positioned anywhere relative to the window's center.
3) The color is adjustable, offering flexibility in the circle's appearance.


<h1 align="center">BE CREATIVE 🧑🏻‍🎨
</h1>

<img src="https://github.com/yazan-metax/draw_with_minilibx/blob/main/image2/Screenshot%202024-01-17%20at%2017.37.35.png">
<img src="https://github.com/yazan-metax/draw_with_minilibx/blob/main/image2/Screenshot%202024-01-17%20at%2019.57.55.png">
<img src="https://github.com/yazan-metax/draw_with_minilibx/blob/main/image2/Screenshot%202024-01-16%20at%2020.35.14.png">
<img src="https://github.com/yazan-metax/draw_with_minilibx/blob/main/image2/Screenshot%202024-01-17%20at%2020.06.56.png">

