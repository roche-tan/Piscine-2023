/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karschne <karschne@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:19:54 by karschne          #+#    #+#             */
/*   Updated: 2023/07/09 18:20:08 by karschne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

extern void	rush(int x, int y);

int	main(void)
{
	rush(5, 3);
	return (0);
}