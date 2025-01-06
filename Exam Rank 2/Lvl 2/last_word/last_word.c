/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulmie <bboulmie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:37:41 by bboulmie          #+#    #+#             */
/*   Updated: 2025/01/05 17:59:18 by bboulmie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;

	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] == ' ' && av[1][i + 1] >= 33 && av[1][i + 1] <= 126)
				j = i + 1;
			i++;
		}
		while (av[1][j] >= 33 && av[1][j] <= 126)
		{
			write(1, &av[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}