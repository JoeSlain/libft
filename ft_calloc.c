/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:32:46 by jcueille          #+#    #+#             */
/*   Updated: 2021/12/28 18:19:35 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	int		i;
	void	*res;

	i = 0;
	res = malloc(count * size);
	if (res)
	{
		while (i < (int)count * (int)size)
		{
			*(char *)(res + i) = '\0';
			i++;
		}
	}
	return (res);
}
