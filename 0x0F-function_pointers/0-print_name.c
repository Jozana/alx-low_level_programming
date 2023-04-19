#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: name of the person
 * @f: pointer to a function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);

}
