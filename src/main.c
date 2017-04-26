/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 16:46:08 by cyildiri          #+#    #+#             */
/*   Updated: 2017/04/25 18:25:13 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct	s_light_ray
{
	double		x;
	double		y;
	double		
}

/*
**	Render the view of the specified camera using the ray tracing method
*/

	void	render_view(t_scene *scene, t_camera *cam)
{
	int x;
	int y;
	t_color color;
	t_vector start_vec;

	y = 0;
	while (y < cam->canvas->height)
	{
		x = 0;
		while (x < cam->canvas->width)
		{
			//calculate ray vector
			start_vec = camera_get_ray_vector(cam, x, y)
			//trace ray
			color = scene_trace_ray(scene, start_vec);
			//draw pixel
			frame_draw_pixel(cam->canvas, x, y, color);
			x++;
		}
		y++;
	}
}

void	render_loop()
{
	//calculate

	//draw frame

	//render frame
}

void set_hooks()
{
	
}

int main(int argc, char **argv)
{

	return (0);
}
