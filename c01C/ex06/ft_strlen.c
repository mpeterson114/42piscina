/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:33:50 by mpeterso          #+#    #+#             */
/*   Updated: 2022/07/19 16:38:22 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
		i++;}
	return (i);
}

/*int	main()
{
	char *str = "HEY!";
	int i = ft_strlen(str);
	printf("%d", i);
	return (0);
}*/
