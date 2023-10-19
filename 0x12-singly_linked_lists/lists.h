#include <stddef.h>
#ifndef LISTS_H
#define LISTS_H
/**
  *struct word - x-tics of a word
  *@str: the word itself
  *@len: the length of the word
  *@next: pointer to another word
  *Description: This is a structure of a word pointing to another
  */
typedef struct word {
	char *str;
	int len;
	struct word *next;
}list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
#endif
