/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaaza <azaaza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:51:49 by azaaza            #+#    #+#             */
/*   Updated: 2023/07/11 10:43:36 by azaaza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

int		ft_strlen(const char *str);

int		ft_toupper(int c);

int		ft_tolower(int c);

int		ft_atoi(const char *str);

void	*ft_memset(void *b, int c, size_t len);

void	ft_bzero(void *s, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t len);

void	*ft_memchr(const void *s, int c, size_t n);

char	*ft_strchr(const char *str, int c);

char	*ft_strrchr(const char *str, int c);

size_t	ft_strlcpy(char *dest, char *src, size_t dest_size);

size_t	ft_strlcat(char *dest, char *src, size_t dest_size);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

char	*ft_strdup(const char *s1);

void	*ft_calloc(size_t count, size_t size);

#endif