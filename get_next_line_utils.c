/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_utils.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: bnijland <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/08 22:06:52 by bnijland      #+#    #+#                 */
/*   Updated: 2019/12/08 23:31:23 by bnijland      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t		ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char		*ft_strjoin(char *s1, char *s2)
{
	char	*s3;
	int		i;
	int		j;

	i = 0;
	j = 0;
	s3 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (s3 == 0)
		return (0);
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	s3[i] = 0;
	free(s1);
	return (s3);
}

char		*ft_strdup(const char *s1)
{
	char	*d1;
	size_t	i;

	i = 0;
	d1 = malloc(ft_strlen(s1) + 1);
	if (d1 == 0)
		return (0);
	while (s1[i])
	{
		d1[i] = s1[i];
		i++;
	}
	d1[i] = 0;
	return (d1);
}

char		*ft_strndup(const char *s1, size_t n)
{
	char	*d1;
	size_t	i;

	i = 0;
	while (i < n && s1[i])
		i++;
	d1 = malloc(i + 1);
	i = 0;
	while (i < n && s1[i])
	{
		d1[i] = s1[i];
		i++;
	}
	d1[i] = 0;
	return (d1);
}
