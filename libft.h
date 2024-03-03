/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:56:41 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/03 19:11:54 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <ctype.h>

int		ft_isalpha(int c);
void	ft_bzero(void *s, size_t n);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_strlen(const char *s);
void	*ft_memset(void *dest, int c, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
size_t	ft_strlcat(char *dest, char *src, size_t size);
char	*ft_strchr(const char *src, int c);
char	*ft_strrchr(const char *src, int c);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
void	*ft_memchr(const void *src, int c, size_t len);
int		ft_memcmp(void *s1, void *s2, size_t len);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

#endif