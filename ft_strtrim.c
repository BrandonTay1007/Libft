/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:39:32 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/07 18:02:26 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void check_leaks();

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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	size_t	i;
	size_t	a;

	i = 0;
	a = 0;
	s = malloc(ft_strlen(s1 + 1));
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
	check_leaks();
	return 0;
} */
