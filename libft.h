/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalin-b <acalin-b@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:14:45 by acalin-b          #+#    #+#             */
/*   Updated: 2023/03/25 17:01:03 by acalin-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/*******************
* Checker functions
*****************/

/**
 * @brief Checks if the given character is a letter
 * @param str Pointer to the string to convert
 * @return String converted to integer
 */
int					ft_atoi(const char *str);

/**
 * @brief Checks if the given character is a letter
 * @param c Character to check
 * @return 1 if the character is a letter, 0 otherwise
 */
int					ft_isalpha(int c);

/**
 * @brief Checks if the given character is a digit
 * @param c Character to check
 * @return 1 if the character is a digit, 0 otherwise
 */
int					ft_isdigit(int c);

/**
 * @brief Checks if the given character is a letter or a digit
 * @param c Character to check
 * @return 1 if the character is a letter or a digit, 0 otherwise
 */
int					ft_isalnum(int c);

/**
 * @brief Checks if the given character is a printable character
 * @param c Character to check
 * @return 1 if the character is a printable character, 0 otherwise
 */
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_strlen(const char *c);
int					ft_strlcpy(char *dest, const char *src, size_t destsize);
int					ft_toupper(int c);
int					ft_tolower(int c);
/**
 * @brief
 *
 * @param str
 * @param c
 * @param n
 * @return void*
 */
void				*ft_memset(void *str, int c, size_t n);

/**
 * @brief Set n bytes of the memory area pointed to by s to 0
 *
 * @param s Pointer to the memory area
 * @param n Number of bytes to set to 0
 */
void				ft_bzero(void *s, size_t n);

/**
 * @brief Copies n bytes from src to dest
 * @param dest Pointer to the destination
 * @param src Pointer to the source
 * @param n Number of bytes to copy
 * @return Pointer to the destination
 */
void				*ft_memcpy(void *dest, const void *src, size_t n);
/**
 * @brief Move n bytes from src to dest
 * @param dest Pointer to the destination
 * @param src Pointer to the source
 * @param n Number of bytes to copy
 * @return Pointer to the destination
 */
void				*ft_memmove(void *dest, const void *src, size_t n);
size_t				ft_strlcat(char *dest, const char *src, size_t dest_size);
int					ft_memcmp(const void *str1, const void *str2, size_t n);
void				*ft_memchr(const void *str, int c, size_t n);
int					ft_strncmp(const char *str1, const char *str2, size_t num);
char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *str, int c);
char				*ft_strnstr(const char *str, const char *find, size_t len);
void				*ft_calloc(size_t n, size_t size);
char				*ft_strdup(const char *s);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_itoa(int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
char				**ft_split(char const *s, char c);
/*******************
* Bonus functions
*****************/
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));

#endif
