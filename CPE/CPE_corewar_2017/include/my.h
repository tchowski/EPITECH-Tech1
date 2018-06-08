/*
** EPITECH PROJECT, 2017
** libmy
** File description:
** contains all functions used in libmy.a
*/

#ifndef MY_H_
#define	MY_H_

void	my_putchar(char c);
int	my_isneg(int n);
int	my_put_nbr(int n);
int	my_put_nbr_long(long n);
int	my_put_nbr_base(int n, char *base);
int	my_put_nbr_base_long(long n, char *base);
int	my_put_nbr_base_unsigned(unsigned int n, char *base);
int	my_put_nbr_base_ll(signed long long n, char *base);
void	my_swap(int *a, int *b);
int	my_putstr(char const *str);
int	my_putstrnp(char *str);
int	my_strlen(char const *str);
int	my_getnbr(char *str);
int	my_getnbr_base(char *nbr, char *base);
void	my_sort_int_array(int *tab, int size);
int	my_compute_power_rec(int nb, int p);
int	my_compute_square_root(int nb);
int	my_is_prime(int nb);
int	my_find_prime_sup(int nb);
char	*my_strcpy(char *dest, char const *src);
char	*my_strncpy(char *dest, char const *src, int n);
char	*my_revstr(char *str);
char	*my_strstr(char const *str, char const *to_find);
int	my_strcmp(char const *s1, char const *s2);
int	my_strncmp(char const *s1, char const *s2, int n);
char	*my_strupcase(char *str);
char	*my_strlowcase(char *str);
char	*my_strcapitalize(char *str);
int	my_str_isalpha(char const *str);
int	my_str_isnum(char const *str);
int	my_str_islower(char const *str);
int	my_str_isupper(char const *str);
int	my_str_isprintable(char const *str);
int	my_showstr(char const *str);
int	my_showmem(char const *str, int size);
char	*my_strcat(char *dest, char const *src);
char	*my_strncat(char *dest, char const *src, int nb);
char	*my_strdup(char const *src);
int	my_show_word_array(char * const *tab);
char	**my_str_to_word_array(char const *str);
int	isit_num(int n);
int	is_it_printable(int n);
int	isit_upper(int n);
int	isalpha(int n);
int	isalphanum(char c);
int	word_count(char const *str);
void	*my_memset(void *s, int c, int n);
int	my_strnumcmp(char *s1, char *s2);
int	my_printf(const char *str, ...);
int	my_atoi(char *str);
char	*my_gnl(int fd);
unsigned char	file_exists(char *path);

#endif /* !MY_H_ */
