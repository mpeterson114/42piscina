/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:21:07 by mpeterso          #+#    #+#             */
/*   Updated: 2022/07/25 15:07:50 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*int main()
{
	printf("%d", ft_str_is_lowercase("dheislnc"));
	printf("\n%d", ft_str_is_lowercase("GDkdle"));
	printf("\n%d", ft_str_is_lowercase("\0"));
	return (0);
}*/
