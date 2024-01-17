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
- this code doesn't follow the norms that required by the school, it is made for tutorial purposes .
- the purpose of this code is to make it easy for people who want to understand the logic of drawing any thing on a window using minilibx before they jump into bigger projects like [`FDF`](https://github.com/yazan-metax/FDF)

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




