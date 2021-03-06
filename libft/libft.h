/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: janeway <janeway@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/18 14:51:20 by janeway       #+#    #+#                 */
/*   Updated: 2021/07/04 15:46:37 by janeway       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

int			ft_isdigit(int c);
void		ft_putstr_fd(char *s, int fd);
void		*ft_calloc(size_t nitems, size_t size);
void		ft_bzero(void *str, size_t n);
char		*ft_strjoin(char *s1, char *s2);
size_t		ft_strlen(const char *str);
int			ft_strcmp(const char *s1, const char *s2);

#endif