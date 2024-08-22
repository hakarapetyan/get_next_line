/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <hakarape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:26:23 by hakarape          #+#    #+#             */
/*   Updated: 2024/03/17 13:32:34 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif
# include <unistd.h>
# include <limits.h>
# include <fcntl.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>

char	*get_next_line(int fd);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*c_string(char *buf);
char	*r_string(char *buf, int fd);
char	*g_string(char *buf);
char	*ft_substr(char *s, unsigned int start, size_t len);
int		n_check(char *str);
int		count_str(char *str);

#endif