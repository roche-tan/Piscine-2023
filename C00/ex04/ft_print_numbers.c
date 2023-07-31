/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosabari <rosabari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:59:10 by rosabari          #+#    #+#             */
/*   Updated: 2023/07/07 13:58:23 by rosabari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write (1, "P", 1);
	}
	else
	{
		write (1, "N", 1);
	}
}

int main(void)
{
  int n = 4;
 	ft_is_negative(n);
  return (0);
}