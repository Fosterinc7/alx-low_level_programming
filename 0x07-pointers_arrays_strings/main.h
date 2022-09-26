#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Author: Adeniyi Fosterinc7
 * description: Header file containing all prototypes for all functions
 * used in the 0x07-pointers_arrays_strings directory
 */


#include <stdio.h>
#include <stddef.h>

void print_chessboard(char (*a)[8]);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif /* MAIN_H */
