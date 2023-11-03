/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:13:28 by mmaghri           #+#    #+#             */
/*   Updated: 2023/10/30 20:26:14 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int alpha)
{
	if (alpha >= '0' && alpha <= '9')
	{
		return (1);
	}
	return (0);
}
