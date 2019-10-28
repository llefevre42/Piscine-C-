# include <stdlib.h>
# include <fcntl.h>
extern "C" {
	# include <mlx.h>
}
# include <math.h>
#include <iostream>
#include "mlx.module.hpp"

void printModule(int x , int y, void *mlx, void*win, std::string str, std::string value)
{
	int x1;
	int y1;
	y1 = y;
	x1 = x;
	char * info = const_cast<char *>(str.c_str());
	char * val = const_cast<char *>(value.c_str());
	mlx_string_put(mlx,win, x + 5, y + 3, 0X00FF00, info);
	mlx_string_put(mlx,win, x + 5, y + 30, 0X00FF00, val);

	while (x < x1 + 250)
	{
			mlx_pixel_put(mlx, win, x, y, 0XFFFFFF);
			x++;
	}
	x = x1;
	y = y1;
	while (x < x1 + 250)
	{
			mlx_pixel_put(mlx, win, x, y + 250, 0XFFFFFF);
			x++;
	}
	x = x1;
	y = y1;
	while (x < x1 + 250)
	{
			mlx_pixel_put(mlx, win, x, y + 25, 0XFFFFFF);
			x++;
	}
	x = x1;
	y = y1;
	while (y < y1 + 250)
	{
			mlx_pixel_put(mlx, win, x, y, 0XFFFFFF);
			y++;
	}
	x = x1;
	y = y1;
	while (y < y1 + 250)
	{
			mlx_pixel_put(mlx, win, x + 250, y, 0XFFFFFF);
			y++;
	}
	(void)value;
}

mlxDisplay::mlxDisplay(void)
{
	int		trash1;
	int		trash2;
	int		trash3;
	this->mlx=mlx_init();																																						//private
	this->win=mlx_new_window(this->mlx, 1250, 500, const_cast<char *>("Rush01"));																							//private
	this->pt_img = mlx_new_image(this->mlx, 1250, 500);																										//private
	this->img = (unsigned int *)mlx_get_data_addr(this->pt_img, &trash1, &trash2, &trash3);				//private
}
mlxDisplay::mlxDisplay(mlxDisplay const &instance)
{
    (void)instance;	
}

mlxDisplay::~mlxDisplay(void)
{
}

mlxDisplay &	mlxDisplay::operator=(mlxDisplay const &rhs)
{
    (void)rhs;
    return *this;
}


void    mlxDisplay::getMonitureModule(bool graphBool, std::string infoType, int position, std::string Values)
{
	int maxy = 250;
	int maxx = 250;

	printModule(maxy * floor(position / 2),
		maxx * (position % 2),
		this->mlx, this->win, infoType, Values);
	(void)graphBool;
}

void    mlxDisplay::preframeOperations(void)
{
	long int	i;
	long int	end;

	end = 1250 * 500;
	i = 0;
	while (i < end - 10)
	{
		this->img[i] = 0X000000;																																					//this->this->img
		this->img[i + 1] = 0X000000;
		this->img[i + 2] = 0X000000;
		this->img[i + 3] = 0X000000;
		this->img[i + 4] = 0X000000;
		this->img[i + 5] = 0X000000;
		this->img[i + 6] = 0X000000;
		this->img[i + 7] = 0X000000;
		this->img[i + 8] = 0X000000;
		this->img[i + 9] = 0X000000;
		i += 10;
	}
	mlx_put_image_to_window(this->mlx, this->win, this->pt_img, 0, 0);																						//this->mlx win pt_img
}

void    mlxDisplay::refreshDisplay(void)
{
	mlx_loop(this->mlx);
}