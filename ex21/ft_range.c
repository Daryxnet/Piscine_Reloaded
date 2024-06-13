/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarmil <dagarmil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:46:00 by dagarmil          #+#    #+#             */
/*   Updated: 2024/06/11 15:52:28 by dagarmil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*aoi;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	aoi = (int *)malloc((max - min) * sizeof(int));
	while (min < max)
	{
		aoi[i] = min;
		min++;
		i++;
	}
	return (aoi);
}
/*
int	main(void)
{
	int	i;
	int	min;
	int	max;
	int	*array;

	i = 0;
	min = 5;
	max = 25;
	array = ft_range(min, max);
	printf("los numeros son: ");
	while (i < (max - min))
	{
		printf("%d", array[i]);
		i++;
	}
	return (0);
}*/
