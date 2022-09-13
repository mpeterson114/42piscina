/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:33:24 by mpeterso          #+#    #+#             */
/*   Updated: 2022/07/26 19:32:15 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main()
{
	printf("%d", ft_strcmp("Hello", "Hello"));
	printf("\n%d", ft_strcmp("abcde", "abcdf"));
	printf("\n%d", ft_strcmp("ABCD", "abcd"));
	return (0);
}*/
