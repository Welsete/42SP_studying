/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welsete <welsete@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 20:37:35 by welsete           #+#    #+#             */
/*   Updated: 2025/05/13 20:37:37 by welsete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr2(int n)
{
	char	c;

	c = (n / 10) + '0';
	write(1, &c, 1);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	b;

	i = 0;
	while (i <= 98)
	{
		b = i + 1;
		while (b <= 99)
		{
			ft_putnbr2(i);
			write(1, " ", 1);
			ft_putnbr2(b);
			if (!(i == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		i++;
	}
}

// int main (void)
// {
// 	ft_print_comb2();
// 	return (0);
// }