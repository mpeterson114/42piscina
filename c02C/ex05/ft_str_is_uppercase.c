/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:27:40 by mpeterso          #+#    #+#             */
/*   Updated: 2022/07/25 15:08:01 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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

/*int	main()
{
	printf("%d", ft_str_is_uppercase("RDHILF"));
	printf("\n%d", ft_str_is_uppercase("fdRUEfd"));
	printf("\n%d", ft_str_is_uppercase("\0"));
	printf("\n%d", ft_str_is_uppercase("2484djfF"));
	return (0);
}*/
