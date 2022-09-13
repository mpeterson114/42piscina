/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:55:19 by mpeterso          #+#    #+#             */
/*   Updated: 2022/07/13 12:50:14 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/

void	ft_print_comb(void)
{
	char	v1;
	char	v2;
	char	v3;

	v1 = '0';
	while (v1 <= '7')
	{
		v2 = v1 + 1;
		while (v2 <= '8')
		{
			v3 = v2 + 1;
			while (v3 <= '9')
			{	
				write(1, &v1, 1);
				write(1, &v2, 1);
				write(1, &v3, 1);
				if (v1 != '7')
					write(1, ", ", 2);
				v3++;
			}
			v2++;
		}
		v1++;
	}
}
