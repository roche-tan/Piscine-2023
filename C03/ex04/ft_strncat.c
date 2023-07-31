/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosabari <rosabari@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 20:02:08 by rosabari          #+#    #+#             */
/*   Updated: 2023/07/25 19:40:09 by rosabari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*final;

	final = dest;
	while (*final != '\0')
		final++;
	while (*src != '\0' && nb > 0)
	{
		*final = *src;
		final ++;
		src++;
		nb --;
	}
	*final = '\0';
	return (dest);
}

int	main()
{
	char	dest[20] = "Hola";
	char 	src[] = "Mundo";
  char	dest1[20] = "Hola";
	char 	src1[] = "Mundo";
	int	nb = 3;

	char *res = ft_strncat(dest, src, nb);
	char *res1 = strncat(dest1, src1, nb);
	printf("El resultado de la funcion replicada es: %s\n", res);
  printf("El resultado de la funcion automatica es: %s\n", res1);
	return (0);
}
