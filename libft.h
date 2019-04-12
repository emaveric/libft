/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaveric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 22:50:49 by emaveric          #+#    #+#             */
/*   Updated: 2019/04/12 21:47:38 by emaveric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const char *str);
int		ft_atoi(char *str);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_strchr(const char *str, int n);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *s1, const char *s2);
char	*ft_strdup(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t len);
char	*ft_strncpy(char *s1, const char *s2, size_t count);
char	*ft_strrchr(const char *str, int n);
int		ft_tolower(int s);
int		ft_toupper(int s);
char	*ft_strstr(const char *s1, const char *s2);
char	*ft_strcat(char *restrict s1, const char *restrict s2);
char	*ft_strncat(char *restrict s1, const char *restrict s2, int n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*
ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_putstr(char const *s1);
void	ft_putchar(char c);
void	ft_putnbr(int n);
char	*ft_strnew(size_t size);
void	*ft_memalloc(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strmap(char const *s, char (*f)(char));


#endif
