/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:32:20 by jcueille          #+#    #+#             */
/*   Updated: 2019/10/08 16:06:03 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;

	if (!(*needle))
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && len > 0)
	{
		j = 0;
		while (haystack[i] == needle[j])
		{
			if (needle[j] == '\0')
				return ((char*)haystack + (i - j));
			j++;
			i++;
		}
		i++;
		len--;
	}
	return (NULL);
}
