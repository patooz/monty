#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct lists_t - double linked list of the stack
 * @m: integer
 * @p: previous element of the stack
 * @next: next elemnts of the stack
 */
typedef struct list_t
{
	int m;
	struct list_t *p;
	struct list_t *next;
} list_t;

/**
 * struct data_t - variables
 * @arg: value
 * @f: pointer to file
 * @con: line content
 * @lif: flag change
 */
typedef struct data_t
{
	char *arg;
	FILE *f;
	char *con;
	int pale;
} data_t bus;

/**
 * struct inst_t - opcode
 * @op: the opcode
 * @funct: function for opcode
 */
typedef struct inst_t
{
	char *op;
	void (*funct)(list_t **list, unsigned int l_num);
} inst_t;

char *_realloc(char *ptr, unsigned int _old, unsigned int  _new);
void k_plus(list_t **h, unsigned int co);
void plusnode(list_t **head, int m);
void k_chei(list_t **head, unsigned int co);
int run_f(char *cont, list_t **list, unsigned int co, FILE *f);
void mystack(list_t *head);
void k_mod(list_t **head, unsigned int count);
void k_mul(list_t **head, unsigned int count);
void k_void(list_t **head, unsigned int count);
void k_print(list_t **head, unsigned int count);
void char_print(list_t **head, unsigned int count);
void top_print(list_t **head, unsigned int count);
stack_pop(list_t **head, unsigned int count);
void print_string(list_t **head, unsigned int count);
void k_push(liist_t **head, unsigned int count);
void myline(list_t **head, int m);
void k_line(list_t **head, unsigned int count);
void rotate(stack_t **head, __attribute__((unused)) unsigned int count);
void rot_down(stack_t **head, __attribute__((unused)) unsigned int count);
void main_stack(stack_t **head, unsigned int count);
void remove_stack(stack_t **head, unsigned int count);
void k_change(stack_t **head, unsigned int count);

#endif /** MAIN_H */
