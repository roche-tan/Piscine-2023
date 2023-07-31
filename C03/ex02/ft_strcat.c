/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosabari <rosabari@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 20:00:59 by rosabari          #+#    #+#             */
/*   Updated: 2023/07/25 19:38:50 by rosabari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*final;

	final = dest;
	while (*final != '\0')
		final++;
	while (*src != '\0')
	{
		*final = *src;
		final++;
		src++;
	}
	*final = '\0';
	return (dest);
}

int	main(void)
{
	char	dest[50] = "Hola";
	char src[50] = "Mundo";

	char *res = ft_strcat(dest, src);
	char *res1 = strcat(dest, src);
  printf("El resultado de la funcion replicada es: %s\n", res);
  printf("El resultado de la funcion automatica es: %s\n", res1);
  return 0;
}
