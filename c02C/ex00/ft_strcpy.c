/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:48:29 by mpeterso          #+#    #+#             */
/*   Updated: 2022/07/25 15:07:09 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{	
			dest[i] = src[i];
			i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main(void)
{
	char src[] = "megan";
	char dest[] = "fehilh";
	ft_strcpy(dest, src);
	printf("%s", dest);
	return 0;
}*/
