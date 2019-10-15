/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 14:25:50 by jcueille          #+#    #+#             */
/*   Updated: 2019/10/15 14:41:00 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_fill(char *s, char c, char **res)
{
	int i;
	int x;
	int l;

	x = 0;
	i = 0;
	l = 0;
	while (*s)
	{
		i = 0;
		while (*s == c)
			s++;
		while (*s != c && *s)
		{
			res[l][i] = *s;
			s++;
			i++;
		}
		res[l][i] = '\0';
		l++;
	}
}

void	ft_countchar(char *s, char c, char **res)
{
	int x;

	while (*s)
	{
		x = 0;
		while (*s == c)
			s++;
		while (*s != c && *s)
		{
			s++;
			x++;
		}
		*res = malloc(x + 1);
		res++;
	}
}

int		ft_countword(char *s, char c)
{
	int i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		i++;
		while (*s != c && *s)
			s++;
	}
	return (i);
}

char	**ft_split(char *s, char c)
{
	char **res;
	char i;

	i = 0;
	res = malloc(sizeof(*res) * ft_countword(s, c));
	ft_countchar(s, c, res);
	ft_fill(s, c, res);
	return (res);
}
