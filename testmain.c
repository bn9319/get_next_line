/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   testmain.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bnijland <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/21 13:50:58 by bnijland      #+#    #+#                 */
/*   Updated: 2019/11/30 23:23:53 by bnijland      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	main(void)
{
	int fd;
	char *line;

	fd = open("hello.txt", O_RDONLY);
//	printf("%d\n", fd);
	while (get_next_line(fd, line) == 1)
	{
		printf("%d\n", get_next_line(fd, line));
	}
//	printf("%d\n", get_next_line(fd, line));
	return(0);
}
