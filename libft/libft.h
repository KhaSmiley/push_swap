/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboulkri <kboulkri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:57:34 by kboulkri          #+#    #+#             */
/*   Updated: 2023/11/20 19:44:34 by kboulkri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/* libft */

size_t				ft_strlen(const char *str);
void				pf_convert_base(unsigned long nbr, char param, int *len);
void				pf_putnbr_base(unsigned long nbr, char *base, int *len);
void				go_search(va_list args, const char *str, int *len);
int					ft_printf(const char *str, ...);
int					pf_putchar(char c);
void				pf_putstr(char *str, int *len);
void				pf_putnbr(int n, int *len);
unsigned long		pf_strlen(char *str);

#endif