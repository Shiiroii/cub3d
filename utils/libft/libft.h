/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine-b <jlaine-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:08:14 by jlaine-b          #+#    #+#             */
/*   Updated: 2025/09/12 10:33:56 by jlaine-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdint.h>
# include <limits.h>
# include <errno.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdarg.h>
# include "get_next_line.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

typedef struct s_segment
{
	int		start;
	int		end;
}			t_segment;

enum e_booleen
{
	FALSE=0,
	TRUE=1
};

/* numbers */
int			ft_atoi(const char *nptr);
char		*ft_itoa(int n);
int			ft_abs(int i);
int			ft_bool(int bool);

/* characters */
int			ft_isalpha(int c);
int			ft_isnum(int c);
int			ft_bool(int bool);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_isnum(int c);
int			ft_iswhitespace(char c);
int			ft_charinstr(char *s, char c);
int			is_x_char_in_str(char *str, char c, int x);
int			does_char_end_line(char *line, char c);
int			does_char_start_line(char *line, char c);
int			ft_strrchri(const char *s, int c);
int			ft_strchri(const char *s, int c);
int			ft_toupper(int c);
int			ft_tolower(int c);

/* strings */
size_t		ft_strlen(const char *s);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strnstr(const char *big, const char *little, size_t len);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strjoinfree(char *s1, char *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_strtrimfree(char *s1, char *set);
char		**ft_split(char const *s, char c);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
int			ft_strcmp(const char *s1, const char *s2);
t_segment	find_segment(char *str, char c);
char		*ft_firstword(char *str, char c);
int			close_quote(char *str, int i, char c);

/* tabs */
char		**add_line_in_tab(char **tab, char *line);
void		free_tab(void **tab);
char		**ft_insert_last_line(char **text, char *line);
void		print_tab(char **text);
int			tab_size(char **tab);
char		**append_tabs_and_free(char **tab1, char **tab2);
char		**cut_tab_head(char **tab, int n);
char		**cut_tab_tail(char **tab, int n);
char		**delete_line_in_tab(char **old_tab, int i);
char		**replace_line(char **tab, char *line, int i);

/* memory */
void		*ft_memset(void *s, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_calloc(size_t nmemb, size_t size);
char		*ft_strdup(const char *s);

/* fd */
char		*get_next_line(int fd);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
char		*ft_filetostr(char *pathname);

/* lists */
t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/* printf */
int			ft_printf(const char *s, ...);
int			ft_parsing_printf(const char *s);
int			ft_chose_printf(char s, va_list list);
int			ft_print_char(char c);
int			ft_print_str(char *str);
int			ft_print_ptr(void *ptr);
int			ft_print_int(int nb);
int			ft_print_udec(unsigned int nb);
int			ft_print_lowhex(unsigned int nb);
int			ft_print_uphex(unsigned int nb);

#endif
