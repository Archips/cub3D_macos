/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free_s2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:40:07 by cvidon            #+#    #+#             */
/*   Updated: 2021/12/07 17:43:09 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Concatenate two strings into a new string (with malloc).
 **
 ** @param[in]  s1 the first string.
 ** @param[in]  s2 the second string (will be free).
 ** @return     A string made of s1 + s2.
 */

char	*ft_strjoin_free_s2(char const *s1, char *s2)
{
	char	*p2;
	char	*s3;

	p2 = s2;
	s3 = ft_strjoin (s1, s2);
	if (p2)
	{
		free (p2);
		p2 = NULL;
	}
	return (s3);
}
