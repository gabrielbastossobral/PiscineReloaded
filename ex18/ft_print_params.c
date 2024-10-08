/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 08:04:57 by gabastos          #+#    #+#             */
/*   Updated: 2024/10/07 11:37:26 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, const char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		while (*argv[i])
			ft_putchar(*argv[i]++);
		i++;
		ft_putchar('\n');
	}
	return (0);
}
