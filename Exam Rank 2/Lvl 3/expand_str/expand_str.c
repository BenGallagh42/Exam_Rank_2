/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulmie <bboulmie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:26:54 by bboulmie          #+#    #+#             */
/*   Updated: 2024/10/16 18:47:40 by bboulmie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		int flag = 0;
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (av[1][i] != '\0')
		{
			if (av[1][i] == ' ' || av[1][i] == '\t')
				flag = 1;
			if (av[1][i] != ' ' && av[1][i] != '\t')
			{
				if (flag == 1)
					write(1, "   ", 3);
				flag = 0;
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}