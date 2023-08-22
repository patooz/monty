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
	int lif;
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

#endif /** MAIN_H */
