#ifndef MAIN_H
#define MAIN_H

/**
 *  * file: main.h
 *   * Description: Header file containing all function,
 *    * prototypes used in 0x08. C - Recursion project.
 *    */

int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int find_sqrt(int input_num, int let);
int is_prime_number(int n);
int evaluate_prime(int input_num, int factor);
int is_palindrome(char *s);
int evaluate_palindrome(char *s, int start, int end);
int wildcmp(char *s1, char *s2);
void iterate_wild(char **wildstr);
char *suffix_match(char *str, char *suffix);
#endif
