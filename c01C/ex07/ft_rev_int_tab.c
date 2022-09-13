/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:39:49 by mpeterso          #+#    #+#             */
/*   Updated: 2022/07/19 18:10:51 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int temp;

	i = 0;
	while (i < (size/2))
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size -1 - i] = temp;
		i++;
	}
}

/*int	main()
{
	int tab[5] = {0, 1, 2, 3, 4};
	int size;
	
	size = 5;
	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
   return (0);
}*/	

