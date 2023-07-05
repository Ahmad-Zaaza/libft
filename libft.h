/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaaza <azaaza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:51:49 by azaaza            #+#    #+#             */
/*   Updated: 2023/07/04 18:11:55 by azaaza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>

int ft_isalpha(int c);

int ft_isdigit(int c);

int ft_isalnum(int c);

int ft_isascii(int c);

int ft_isprint(int c);

int ft_strlen(char *str);

int ft_toupper(int c);

int ft_tolower(int c);

int ft_atoi(char *str);

void *ft_memset(void *b, int c, size_t len);

void ft_bzero(void *s, size_t n);

void *memcpy(void *dest, void *src, size_t n);

#endif