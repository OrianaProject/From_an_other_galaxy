/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperroch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 09:31:00 by gperroch          #+#    #+#             */
/*   Updated: 2015/11/28 11:10:24 by gperroch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		l1;
	int		l2;

	i = 0;
	l1 = ft_strlen((char*)s1);
	l2 = ft_strlen((char*)s2);
	if (!(s3 = (char*)malloc(sizeof(char) * (l1 + l2 + 1))))
		return (0);
	while (i < (l1 + l2))
	{
		if (i < l1)
			s3[i] = (char)s1[i];
		else
			s3[i] = (char)s2[i - l1];
		i++;
	}
	s3[i] = '\0';
	return (s3);
}