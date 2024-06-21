/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarmil <dagarmil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 18:05:15 by dagarmil          #+#    #+#             */
/*   Updated: 2024/06/13 16:02:24 by dagarmil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb > 13)
		return (0);
	if (nb == 0)
	{
		return (1);
	}
	while (nb > 0)
	{
		res *= nb;
		nb--;
	}
	return (res);
}
