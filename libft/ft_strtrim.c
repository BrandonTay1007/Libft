/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:39:32 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/10 17:51:45 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}
/* size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
} */
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	i = 0;
	if (!s1 || !set)
		return ((char *)s1);
	while (s1[start] && is_set(s1[start], set))
		start++;
	if (start == ft_strlen(s1) - 1)
		return ((char *)s1);
	end = ft_strlen(s1) - 1;
	while (s1[end] && is_set(s1[end], set))
		end--;
	s = malloc (ft_strlen(s1) - start - (ft_strlen(s1) - end));
	while (start <= end)
	{	
		s[i] = s1[start];
		i++;
		start++;
	}
	s[i] = '\0';
	return (s);
}

int main(int argc, char const *argv[])
{
	char *s1 = "ZZZ zzz a aHello dada world  zzZ z  ";
	char *s2 = "Hello \t  Please\n Trim me !";
	char *a = ft_strtrim("", "Zz a");
	puts(a);
}
