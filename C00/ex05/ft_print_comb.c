/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosabari <rosabari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:47:22 by rosabari          #+#    #+#             */
/*   Updated: 2023/07/20 19:18:54 by rosabari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(char digit_1, char digit_2, char digit_3)
{
	if (digit_1 != digit_2 && digit_1 != digit_3 && digit_2 != digit_3)
	{
		write(1, &digit_1, 1);
		write(1, &digit_2, 1);
		write(1, &digit_3, 1);
		if (digit_1 != '7' || digit_2 != '8' || digit_3 != '9')
		{
			write (1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	char	digit_1;
	char	digit_2;
	char	digit_3;

	digit_1 = '0';
	digit_2 = '1';
	digit_3 = '2';
	while (digit_1 <= '7')
	{
		while (digit_2 <= '8')
		{
			while (digit_3 <= '9')
			{
				ft_print_numbers(digit_1, digit_2, digit_3);
				digit_3++;
			}
			digit_3 = digit_2 + 1;
			digit_2++;
		}
		digit_2 = digit_1 + 1;
		digit_3 = digit_2 + 1;
		digit_1++;
	}
}

int main(void)
{
  ft_print_comb();
  return (0);
}