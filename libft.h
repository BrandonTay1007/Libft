/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:56:41 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/12/01 15:17:21 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>
# include <errno.h>
# include <fcntl.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;


int		ft_isalpha(int c);
void	ft_bzero(void *s, size_t n);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
size_t	ft_strlen(const char *s);
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
int		ft_atoi(const char *str);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(char *src);
char	*ft_substr(char const *str, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *src, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
char	*get_next_line(int fd);
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void	ft_putnbr_helper(long nb, int *count);
int		ft_put_uint(unsigned int nb);
int		ft_put_ptr(void *ptr);
void	ft_put_hexa(unsigned long nb, char format, int *count);
int		ft_hexa_uint(unsigned int nb, char format);
int		ft_hexa_ulong(unsigned long nb, char format);
int		ft_putint(int nb);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_printf(const char *str, ...);
int	    speci_parser(char d_type, va_list args);
void	ft_free_arr(void **arr);

#endif