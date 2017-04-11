#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
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
extern char **environ;
void _putchar(char);
char *create_array(unsigned int size, char c);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
/* _getenv.c */
int _const_strlen(const char *s);
int _strncmp(const char *s1, const char *s2, int n);
char *_getenv(const char *name);
/* lists */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
/* _strtok.c */
int count_words(char *str, char delim);
int _wrdlen(char *s, char delim);
char **strtow(char *str, char delim);
/* print_path_dirs.c */
char *_strdup(char *str);
void print_tab(char **tab);
/* path_list.c */
int arr_size(char **);
char **path_dirs_array(void);
list_t *path_dirs_list(char **);
/*  _strcpy.c */
int _strlen(const char *s);
char *_strcat(char *, const char *);
char *_strcpy(char *, const char *);
int _strcmp(char *s1, char *s2);
/* _setenv.c  */
int find_len(char *str, char c);
char *_strchr(const char *str, char c);
int _putenv(char *);
int _setenv(const char *name, const char *value, int overwrite);
/*  _unsetenv.c */
int delete_node(list_t **head, char *ptr);
int _unsetenv(const char *name);
#endif
