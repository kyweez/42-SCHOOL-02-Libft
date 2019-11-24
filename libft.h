/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 20:15:44 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/20 16:59:13 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_dlist
{
	void			*content;
	size_t			content_size;
	struct s_dlist	*prev;
	struct s_dlist	*next;
}					t_dlist;

int					ft_atoi(const char *str);
void				ft_bzero(void *str, size_t n);
int					ft_char_to_skip(const char *c, const char *str);
size_t				ft_countword(const char *src, const char *to_skip);
t_dlist				*ft_dlst_newlist(void *content, size_t content_size);
void				ft_dlst_print_dlst_char(t_dlist **dlst);
void				ft_free_tab(char **tab, int j);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_islower(int c);
int					ft_isprint(int c);
int					ft_issign(int c);
int					ft_isspace(int c);
int					ft_isupper(int c);
char				*ft_itoa(int nbr);
size_t				ft_lst_count_link(t_list *alst);
void				ft_lst_del_content(void *lst_cont, size_t lst_cont_size);
t_list				*ft_lst_index_link(t_list *lst, size_t index);
t_list				*ft_lst_last_link(t_list *lst);
void				ft_lst_print_lst_char(t_list **alst);
t_list				*ft_lst_pushback(t_list *al, const void *c, size_t c_size);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstiter(t_list *lst, void (*function)(t_list *link));
t_list				*ft_lstmap(t_list *lst, t_list *(function)(t_list *elem));
t_list				*ft_lstnew(const void *content, size_t content_size);
void				*ft_memalloc(size_t size);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memchr(const void *str, int c, size_t n);
int					ft_memcmp(const void *str1, const void *str2, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				ft_memdel(void **ptr_to_free);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *str, int c, size_t len);
void				ft_print_char_tab(const char **tab);
void				ft_putchar_fd(char c, int fd);
void				ft_putchar(char c);
void				ft_putendl_fd(const char *str, int fd);
void				ft_putendl(const char *str);
void				ft_putnbr_fd(int nbr, int fd);
void				ft_putnbr(int nbr);
void				ft_putnbrendl(int nbr);
void				ft_putstr_fd(const char *str, int fd);
void				ft_putstr(const char *str);
char				**ft_return_free_tab(char **tab, int j);
char				*ft_strcat(char *str1, const char *str2);
char				*ft_strchr(const char *str1, int c);
void				ft_strclr(char *str);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dst, const char *src);
void				ft_strdel(char **str);
char				*ft_strdup(const char *src);
int					ft_strequ(const char *str1, const char *str2);
void				ft_striter(char *str, void (*function)(char *));
void				ft_striteri(char *str, void (*fct)(unsigned int, char *));
char				*ft_strjoin(const char *str1, const char *str2);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlen(const char *str);
size_t				ft_strlendelim(const char *src, const char *str);
char				*ft_strmap(const char *str, char (*function)(char));
char				*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char				*ft_strncat(char *str1, const char *str2, size_t n);
int					ft_strncmp(const char *str1, const char *str2, size_t n);
char				*ft_strncpy(char *dst, const char *src, size_t n);
char				*ft_strndup(const char *src, size_t n);
int					ft_strnequ(const char *str1, const char *str2, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strnstr(const char *str1, const char *str2, size_t n);
char				*ft_strrchr(const char *str, int c);
char				*ft_strrev(char *str);
char				**ft_strsplit(const char *src, char c);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strsub(const char *str, unsigned int start, size_t n);
char				*ft_strtrim(const char *str);
void				ft_swap(char *a, char *b);
int					ft_tolower(int c);
int					ft_toupper(int c);
#endif
