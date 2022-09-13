/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:11:29 by mpeterso          #+#    #+#             */
/*   Updated: 2022/07/19 16:06:04 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;

	*a = div;
	*b = mod;
}

/*int main()
{
	int x = 18;
	int y = 12;
	ft_ultimate_div_mod(&x, &y);
	printf("%d\n", x);
	printf("%d", y);
	return 0;
}*/
