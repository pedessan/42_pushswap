/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:27:25 by pdessant          #+#    #+#             */
/*   Updated: 2025/04/28 16:53:50 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* LOCAL LIBRARIES */
//# include "getnextline_srcs/get_next_line.h"
# include "getnextline_srcs/get_next_line_bonus.h"
# include "printf_srcs/ft_printf.h"

/* OTHER NECESSARY LIBRARIES */
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stddef.h>
# include <stdarg.h>
# include <sys/wait.h>

/* ADDITIONAL LIBRARIES FOR TESTS */
# include <stdio.h>
# include <ctype.h>
# include <string.h>
//# include <bsd/string.h>

# define INT_MIN -2147483648
# define INT_MAX 2147483647

/* LIST STRUCT */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/* STRUCT */
typedef struct s_split
{
	int	i;
	int	l;
	int	flag;
}	t_split;

/* PROTOTYPES */
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_atoi(const char *nptr);
int		ft_lstsize(t_list *lst);
int		ft_split_is_word(char c);
int		ft_split_count_word(char *s);
int		ft_split_word_len(char *s);

long	ft_atol(const char *nptr);

char	*ft_split_dup_word(char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_itoa(int n);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	**ft_charset_split(char *s);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void	ft_free_s_matrix(char **ar);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putchar_and_count_fd(char c, int fd, int *ret);
void	ft_putstr_fd(char *s, int fd);
void	ft_putstr_and_count_fd(char *s, int fd, int *ret);
void	ft_putendl_fd(char *s, int fd);
void	ft_putendl_and_count_fd(char *s, int fd, int *ret);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr_and_count_fd(int n, int fd, int *ret);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
