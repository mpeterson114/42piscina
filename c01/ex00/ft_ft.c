/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:05:21 by mpeterso          #+#    #+#             */
/*   Updated: 2022/07/16 19:06:29 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

/*int	main(void)
{
	int i;
	int *nbr;

	nbr = &i;
	ft_ft(nbr);
	printf("%d\n", i);
	return (0);
}*/

void	ft_ft(int *nbr)
{
	*nbr = 42;
}	
