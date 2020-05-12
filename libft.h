/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utoomey <utoomey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 09:06:50 by utoomey           #+#    #+#             */
/*   Updated: 2020/05/10 01:08:41 by utoomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_atoi(const char *str);
char				*ft_itoa(int n);
int					ft_strlen(char *str);
int					ft_strncmp(const char *str1, const char *str2, size_t n);
int					ft_isprint(int ch);
int					ft_isalpha(int ch);
int					ft_isdigit(int ch);
int					ft_isalnum(int ch);
int					ft_toupper(int ch);
int					ft_isascii(int ch);
int					ft_tolower(int ch);
char				*ft_strrchr(const char *str, int ch);
char				*ft_strnstr(const char *s1, const char *s2, size_t length);
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, int n);
void				*ft_memcpy(void *dst, const void *src, size_t size);
void				*ft_memccpy (void *dst, const void *src, int c, size_t n);
void				*ft_memmove (void *dst, const void *src, size_t n);
void				*ft_memchr (const void *arr, int c, size_t n);
int					ft_memcmp(const void *one, const void *two, size_t num);
size_t				ft_strlcpy(char *dest, const char *src, size_t size);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strdup(char const *s);
char				*ft_substr(char const *s, unsigned int start, size_t len);
void				*ft_calloc(size_t num, size_t size);
char				*ft_strjoin(char const *s1, char const *s);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast (t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstiter(t_list *list, void (*f)(void *));
void				ft_lstclear(t_list **list, void (*del)(void *));
t_list				*ft_lstmap(t_list *l, void *(*f)(void*), void(*d)(void*));

#endif
