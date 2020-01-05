/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bnijland <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/08 21:59:53 by bnijland      #+#    #+#                 */
/*   Updated: 2019/12/08 23:35:39 by bnijland      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		ft_return_nextline(char **line, char *tmp, size_t *i, size_t *j)
{
	*line = ft_strndup(&tmp[*j], *i - *j);
	(*i)++;
	return (1);
}

static char		*ft_tmp(char *tmp, int *ret)
{
	tmp = malloc(1);
	tmp[0] = 0;
	*ret = 1;
	return (tmp);
}

static int		ft_return_free(char *tmp)
{
	free(tmp);
	return (0);
}

int				get_next_line(int fd, char **line)
{
	char			buf[BUFFER_SIZE + 1];
	static char		*tmp;
	static size_t	i;
	static size_t	j;
	static int		ret;

	j = i;
	if (j == 0)
		tmp = ft_tmp(tmp, &ret);
	while (ret > 0)
	{
		if (tmp[i] == 0)
		{
			ret = read(fd, buf, BUFFER_SIZE);
			if (ret < 0)
				return (-1);
			buf[ret] = 0;
			tmp = ft_strjoin(tmp, buf);
		}
		if (tmp[i] == '\n')
			return (ft_return_nextline(line, tmp, &i, &j));
		i++;
	}
	*line = ft_strdup(&tmp[j]);
	return (ft_return_free(tmp));
}
