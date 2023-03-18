/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalin-b <acalin-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:14:45 by acalin-b          #+#    #+#             */
/*   Updated: 2023/03/18 18:22:04 by acalin-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>

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
char				*ft_strnstr(const char	*str, const char *find, size_t len);
void				*ft_calloc(size_t n, size_t size);
char				*ft_strdup(const char *s);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);

#endif