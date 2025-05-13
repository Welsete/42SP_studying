/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welsete <welsete@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 17:14:45 by welsete           #+#    #+#             */
/*   Updated: 2025/05/13 17:14:48 by welsete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
		write(1, "P", 1);
	else
		write(1, "N", 1);
}
// int main (void)
// {
// 	ft_is_negative(1);
// 	write(1, "\n", 1);
// 	ft_is_negative(-1);
// 	write(1, "\n", 1);
// 	ft_is_negative(0);
// 	write(1, "\n", 1);
// }