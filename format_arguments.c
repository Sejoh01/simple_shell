#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * get_arg - Returns a formatted argument based on the type specifier.
 *
 * @type: Type specifier indicating the desired formatting
 * @...: Variable number of arguments depending on the type specifier.
 *
 * This function takes a type specifier and a variable number of arguments and
 * a formatted string representation of the argument based on the typ specifier

 * Return: A dynamically allocated string representation of the argument based,
 * on the type specifier else null if unsupported specifier set 
 */


char *get_arg(char type, ...)
{
	va_list params;

	va_start(params, type);
	switch (type)
	{
	case 'c':
		return (get_char(va_arg(params, int)));
	case 's':
		return (get_string(va_arg(params, char*)));
	case 'd':
	case 'i':
		return (get_number(va_arg(params, int)));
	case 'b':
		return (get_binary(va_arg(params, int)));
	case 'r':
		return (get_rev(va_arg(params, char *)));
	case 'R':
		return (get_rot13(va_arg(params, char *)));
	default:
		return (NULL);
	}
}
