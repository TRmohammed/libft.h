/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:05:38 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/09 11:21:20 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"											

char	*ft_substr(char const *string, unsigned int start, size_t len)
{
	char	*allocation ;
	size_t	index ;

	index = 0 ;
	if (!string)
		return (NULL);
	if (start >= ft_strlen(string))
		return ((char *)ft_calloc(1, sizeof(char)));
	if (ft_strlen(string) <= start + len)
		allocation = (char *)malloc(sizeof(char) 
				* (ft_strlen(string) - start + 1));
	else
		allocation = (char *)malloc(sizeof(char) * len + 1);
	if (!allocation)
		return (NULL);
	while (string[start] && index < len)
	{
		allocation[index++] = string[start++];
	}
	allocation[index] = '\0';
	return (allocation);
}
