/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosabari <rosabari@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 20:03:15 by rosabari          #+#    #+#             */
/*   Updated: 2023/07/26 15:57:22 by rosabari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*start;
	char	*find;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		start = str;
		find = to_find;
		while (*str == *find && *find != '\0')
		{
			str++;
			find++;
		}
		if (*find == '\0')
			return (start);
		str = start + 1;
	}
	return (0);
}

int	main()
{
	char	str[] = "Hola que tal";
	char	str1[] = "Hola que tal";
	char	to_find[] = "qU";
	char	to_find1[] = "qU";

	char	*res = ft_strstr(str, to_find);
	char 	*res1 = strstr(str1, to_find1);

	printf("El resultado de la funcion replicada es: %s\n", res);
	printf("El resultado de la funcion automatica es: %s\n", res1);
	return (0);
}
