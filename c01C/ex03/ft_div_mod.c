/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:25:33 by mpeterso          #+#    #+#             */
/*   Updated: 2022/07/20 11:32:34 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
		*div = a / b;
		*mod = a % b;	
}

/*int main()
{
	int a = 12;
	int b = 0;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	printf("%d\n", div);
	printf("%d", mod);
	return 0;
}*/
