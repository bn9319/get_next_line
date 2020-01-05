/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bnijland <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/08 22:17:39 by bnijland      #+#    #+#                 */
/*   Updated: 2019/12/09 16:49:59 by bnijland      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

int		get_next_line(int fd, char **line);
char	*ft_strdup(const char *s1);
char	*ft_strndup(const char *s1, size_t n);
size_t	ft_strlen(const char *s1);
char	*ft_strjoin(char *s1, char *s2);

#endif
