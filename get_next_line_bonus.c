/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <hakarape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:25:51 by hakarape          #+#    #+#             */
/*   Updated: 2024/03/25 12:34:41 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	n_check(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (0);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*get_next_line(int fd)
{
	static char	*buffer[OPEN_MAX];
	char		*line;

	if (fd > OPEN_MAX)
		return (NULL);
	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		free(buffer[fd]);
		buffer[fd] = NULL;
		return (NULL);
	}
	buffer[fd] = r_string(buffer[fd], fd);
	line = g_string(buffer[fd]);
	buffer[fd] = c_string(buffer[fd]);
	return (line);
}

// int main()
// {
// 	int fd;
// 	fd = open("text1.txt", O_RDONLY);
// 	//printf("%d\n", fd);
// 	fd = open("text4.txt", O_RDONLY);
// 	//printf("%d\n", fd);
// 	//printf("%d\n", OPEN_MAX);
// 	printf("%s", get_next_line(3));
// 	printf("%s", get_next_line(4));
// 	//printf("%s", get_next_line(3));
// 	//printf("%s", get_next_line(4));
// 	// // printf("line: %s", get_next_line(fd));
// 	// // printf("line: %s", get_next_line(fd));
// 	// // 	printf("line: %s", get_next_line(fd));
// 	// // printf("line: %s\n", get_next_line(fd));
// }