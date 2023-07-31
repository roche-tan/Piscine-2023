/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosabari <rosabari@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 12:45:09 by rosabari          #+#    #+#             */
/*   Updated: 2023/07/12 15:44:58 by rosabari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count ++;
		str++;
	}
	return (count);
}

int main(void)
{
	printf("%lu\n", strlen(""));
	printf("%d\n", ft_strlen(""));
}
