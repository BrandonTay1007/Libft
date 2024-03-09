/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:39:32 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/08 18:41:29 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		check(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (0);
		i++;
	}
	return (1);
}
int	get_len(char const *s1, char const *set)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s1[i])
	{
		if (check(s1[i], set))
			len++;
		i++;
	}
	return (len);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	size_t	i;
	size_t	a;
	size_t	strlen;

	i = 0;
	a = 0;
	strlen = get_len(s1, set);
	s = malloc(strlen + 1);
	if (!s)
		return (NULL);
	while (s1[i])
	{
		if (check(s1[i], set))
		{
			s[a] = s1[i];
			a++;
		}
		i++;
	}

	if (s)
		s[a] = '\0';
	return (s);
}

/* int main(int argc, char const *argv[])
{
	char *str = "Hello world";
	char *set = "le";
	char *a = ft_strtrim("   xxxtripouille", " x");
	puts(a);
	printf("%i", get_len("   xxxtripouille", "x"));
	return 0;
} */
