#ifndef SHELL_H
#define SHELL_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
/* lists.c */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
/* prints.c */
int _putchar(char c);
void _strprint(char *str);
void print_array(char **array);
/* strings.c */
int _strlen(const char *s);
int _strncmp(char *s1, const char *s2, int n);
char *_strdup(char *str);
/* strtok.c */
int count_words(char *str, char delim);
int _wrdlen(char *s, char delim);
char **strtow(char *str, char delim);
#endif
