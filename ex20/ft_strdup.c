/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarmil <dagarmil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:29:50 by dagarmil          #+#    #+#             */
/*   Updated: 2024/06/11 13:38:55 by dagarmil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*newstr;
	int		lensrc;

	lensrc = ft_strlen(src);
	newstr = (char *)malloc((lensrc + 1) * sizeof(char));
	i = 0;
	while (src[i] != '\0')
	{
		newstr[i] = src[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
/*
int	main(int ac, char **av)
{
	int	i;
	char	*new;

	new = ft_strdup(av[1]);
	i = 0;
	while (i < ac)
	{
		printf("src num: %s", av[1]);
		printf("\n");
		printf("nueva str: %s", new);
		i++;
		printf("\n");
	}
	free(new);
	return (0);
}*/
