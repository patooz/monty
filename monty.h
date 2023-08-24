#ifndef MONTY_H
#define MONTY_H
#define _POSIX_C_SOURCE 200809L

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**stack_t
 * struct data_t - variables
 * @arg: value
 * @f: pointer to file
 * @con: line content
 * @lif: flag change
 */
typedef struct data_s
{
	char *arg;
	FILE *f;
	char *con;
	int pale;
} data_t;
extern data_t bus;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

char *_realloc(char *ptr, unsigned int _old, unsigned int  _new);
void k_plus(stack_t **h, unsigned int co);
void plusnode(stack_t **head, int m);
void k_chei(stack_t **head, unsigned int co);
int run_f(char *cont, stack_t **list, unsigned int co, FILE *f);
void f_list(stack_t *head);
void k_mod(stack_t **head, unsigned int count);
void k_mul(stack_t **head, unsigned int count);
void k_void(stack_t **head, unsigned int count);
void k_print(stack_t **head, unsigned int count);
void char_print(stack_t **head, unsigned int count);
void top_print(stack_t **head, unsigned int count);
void stack_pop(stack_t **head, unsigned int count);
void print_string(stack_t **head, unsigned int count);
void k_push(stack_t **head, unsigned int count);
void myline(stack_t **head, int m);
void k_line(stack_t **head, unsigned int count);
void rotate(stack_t **head, __attribute__((unused)) unsigned int count);
void rot_down(stack_t **head, __attribute__((unused)) unsigned int count);
void main_stack(stack_t **head, unsigned int count);
void remove_stack(stack_t **head, unsigned int count);
void k_change(stack_t **head, unsigned int count);

#endif /** MONTY_H */
