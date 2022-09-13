/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:24:25 by mpeterso          #+#    #+#             */
/*   Updated: 2022/07/12 15:29:16 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

/*int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/

void	ft_print_reverse_alphabet(void)
{
	char	letra;

	letra = 'z';
	while (letra >= 'a')
	{
		write(1, &letra, 1);
			letra--;
	}
}
