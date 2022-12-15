/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:35:27 by mpeterso          #+#    #+#             */
/*   Updated: 2022/07/26 16:12:25 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
	printf("%d", ft_str_is_printable("46dfj~"));
	printf("\n%d", ft_str_is_printable("\0"));
	printf("\n%d", ft_str_is_printable("   "));
	printf("\n%d", ft_str_is_printable("\n\v\t\f"));
	return (0);
}*/	
