/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosabari <rosabari@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:01:14 by rosabari          #+#    #+#             */
/*   Updated: 2023/07/25 19:36:51 by rosabari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && (*s1 != '\0' || *s2 != '\0' ))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(void)
{
	char	s1[] = "Hola que tal";
	char	s2[] = "Hola";
	char	s3[] = "Hola que tal";
	char	s4[] = "Hola";
	int	n;

	char res = ft_strcmp(s1, s2);
	char res1 = strcmp(s3, s4);
	printf("%d\n", res);
	printf("%d\n", res1);
	return (0);
}
