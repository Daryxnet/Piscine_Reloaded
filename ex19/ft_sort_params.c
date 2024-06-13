/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarmil <dagarmil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:59:19 by dagarmil          #+#    #+#             */
/*   Updated: 2024/06/11 12:25:45 by dagarmil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print_params(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			ft_putchar(av[i][j]);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	*contav;

	i = 1;
	contav = NULL;
	while (i < ac)
	{
		j = i;
		while (ft_strcmp(av[i], av[j - 1]) < 0 && j > 1)
		{
			contav = av[j - 1];
			av[j - 1] = av[i];
			av[i] = contav;
			j--;
		}
		i++;
	}
	ft_print_params(ac, av);
	return (0);
}
