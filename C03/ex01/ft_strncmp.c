/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosabari <rosabari@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 20:00:09 by rosabari          #+#    #+#             */
/*   Updated: 2023/07/25 19:38:19 by rosabari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while ((*s1 != '\0' || *s2 != '\0') && n > 0)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

int	main(void)
{
	char	s1[] = "Hola";
	char	s2[] = "";

	int	n;
	int	res1;
	int	res2;

	n = 6;
	res1 = ft_strncmp(s1, s2, n);
	res2 = (strncmp(s1, s2, n));
	printf("%d\n", res1);
	printf("%d\n", res2);
	return (0);
}
