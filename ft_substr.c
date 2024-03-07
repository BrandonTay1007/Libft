/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:13:46 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/07 12:29:21 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t	size_str;
	char	*substr;

	if (!str)
		return (NULL);
	size_str = ft_strlen(str);
	if (start >= size_str)
		return (ft_strdup(""));
	if (len > size_str - start)
		len = size_str - start;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, &str[start], len + 1);
	return (substr);
}