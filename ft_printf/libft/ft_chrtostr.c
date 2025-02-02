/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chrtostr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cilla <cilla@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:11:23 by cilla             #+#    #+#             */
/*   Updated: 2021/01/26 18:11:23 by cilla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_chrtostr(char c)
{
	char	*str;

	if (!(str = malloc(2 * sizeof(char))))
		return (NULL);
	str[0] = c;
	str[1] = '\0';
	return (str);
}
