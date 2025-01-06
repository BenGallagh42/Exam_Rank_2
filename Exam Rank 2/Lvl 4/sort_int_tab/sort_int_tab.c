/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulmie <bboulmie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:30:45 by bboulmie          #+#    #+#             */
/*   Updated: 2024/12/12 17:11:01 by bboulmie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;
	unsigned int j;
	int temp;

	while (i < size)
	{
		j = 0;
		while (j < size - i - 1) 
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

// void    ft_putnbr(int n)
// {
//     char c;

//     if (n > 9)
//         ft_putnbr(n / 10);
//     c = n % 10 + '0';
//     write(1, &c, 1);
// }

// int main(void)
// {
// 	int tab[] = {5, 2, 9, 1, 7};
// 	unsigned int size = 5;
// 	unsigned int i = 0;

// 	sort_int_tab(tab,  size);
// 	while (i < size)
// 	{
// 		ft_putnbr(tab[i]);
// 		write(1, " ", 1);
// 		i++;
// 	}
// 	return (0);
// }