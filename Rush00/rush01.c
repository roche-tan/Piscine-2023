/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karschne <karschne@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 17:20:29 by karschne          #+#    #+#             */
/*   Updated: 2023/07/09 18:23:03 by karschne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

extern	void	ft_putchar(char c);

void	ft_conditions(int i_x, int i_y, int x, int y)
{
	if ((i_y == 1 && i_x == 1) || (i_y == y && i_x == x && y > 1 && x > 1))
	{
		ft_putchar('/');
	}
	else if ((i_y == 1 && i_x == x) || (i_y == y && i_x == 1)) 
	{
		ft_putchar('\\');
	}
	else if (i_y == 1 || i_y == y || i_x == 1 || i_x == x) 
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	i_x;
	int	i_y;

	i_x = 1;
	i_y = 1;
	while ((i_y <= y))
	{
		i_x = 1;
		while (i_x <= x)
		{
			ft_conditions(i_x, i_y, x, y);
			i_x++;
		}
		ft_putchar('\n');
		i_y++;
	}
}