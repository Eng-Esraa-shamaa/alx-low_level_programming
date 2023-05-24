#include <stddef.h>
#ifndef POINTER_TO_FUNCTION
#define POINTER_TO_FUNCTION
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
