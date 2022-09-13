/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:53:15 by mpeterso          #+#    #+#             */
/*   Updated: 2022/07/13 15:54:37 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/

void	ft_print_alphabet(void)
{
	char	letra;

	letra = 'a';
	while (letra <= 'z')
	{
		write(1, &letra, 1);
		letra++;
	}
}
