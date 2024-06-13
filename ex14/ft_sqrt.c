/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarmil <dagarmil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 10:17:59 by dagarmil          #+#    #+#             */
/*   Updated: 2024/06/07 10:41:29 by dagarmil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	x;

	x = 1;
	if (nb > 0)
	{
		while (x * x <= nb)
		{
			if (x * x == nb)
				return (x);
			if (x > 46340)
				return (0);
			x++;
		}
	}
	return (0);
}
