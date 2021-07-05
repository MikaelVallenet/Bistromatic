/*
** EPITECH PROJECT, 2020
** EPITECH PROJECT
** File description:
** header file
*/

#define EXIT_USAGE 84
#define EXIT_BASE 84
#define EXIT_SIZE_NEG 84
#define EXIT_MALLOC 84
#define EXIT_READ 84
#define EXIT_OPS 84
#define SYNTAX_ERROR_MSG "syntax error"
#define ERROR_MSG "error"
char *my_mod(char *nbr_1, char *nbr_2, int base);
char *my_div(char *nbr_1, char *nbr_2, int base);
char *my_mul(char *nbr_1, char *nbr_2, int base);
char *my_sub(char *nbr_1, char *nbr_2, int base);
char *my_add(char *nbr_1, char *nbr_2, int base);
int my_is_pos_getnbr(char const *str);
int my_intlen(int nb);
char *my_str_extract(char *dest, char *src, int borne_inf, int borne_sup);
char *add_zero(char *str, int nbr_zero);
char *light_multiplication(char small_nbr, char *big_nbr, int base);
void my_strswap(char **str, char **str_2);
int my_nbrcmp(char const *s1, char const *s2);
char *my_alloc_char(int length, char char_wanted);
int my_is_pos(int value);
int sub_sign(char *big_nbr, char *small_nbr);
int display_operation(char *big_nbr);
int detect_length_add(char const *s1, char const *s2, int i, int k);
int determinate_substract(char *nbr1, char *nbr2, int signe);
int detect_string_add(char s1, char s2);
int my_strcmp_add(char const *s1, char const *s2);
char *supr_sign(char *nbr1);
int cmp_add(char *nbr1, char *nbr2);
int sub_operation(char *big_nbr, char *small_nbr, int rotation);
int compare_two_numbers_string(char *nbr1, char *nbr2);
char *add_operation(char *nbr1, char *nbr2, int j);
int add_nbr1_nbr2(char *nbr1, char *nbr2, int i, int calcul);
char *sup_nbr(char *nbr1, char *nbr2);
char sign(char *nbr1, char *nbr2);
int my_int_compare(int nbr1, int nbr2);
int my_strlen_without_signe(char const *str);
int my_doop_getnbr(char const *str);
int calcul_sign(char const *str, int value);
int my_putstr_error(char const *str);
char my_putchar_error(char c);
char *my_strdup(char const *src);
void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
char *my_strlowcase2(char *str);
int my_is_prime2(int nb);
int square_rooting(int nb, int racine, int carre, int find);
int mikasign(char const *str);
int my_getnbr3(char const *str, int sign, int start, int end);
int my_end(char const *end);
int my_start(char const *start);
int count_total_words(char * const *tab);
int count_total_length(char * const *tab);
int my_show_word_array(char * const *tab);
char up_case(char car);
int detect_string(char s1, char s2);
int detect_string2(char s1, char s2);
int find_proc(int i, char *str, char const *to_find);
int count_words(char const *str);
int my_memory_allocation(char const *str, char **list);
int push_words(char const *str, char **list);
int mikastrlen(char const *str);
int my_length(char **av);
