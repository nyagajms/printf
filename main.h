#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* Formatting Flags */
#define F_MINUS 1   /* Left-justify */
#define F_PLUS 2    /* Show plus sign */
#define F_ZERO 4    /* Zero-padding */
#define F_HASH 8    /* Alternate form */
#define F_SPACE 16  /* Space before positive number */

/* Number Sizes */
#define S_LONG 2    /* Long size */
#define S_SHORT 1   /* Short size */

/**
 * struct fmt - Format specifier and associated function
 * @fmt: The format specifier character.
 * @fn: The function associated with the format.
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};

/**
 * typedef struct fmt fmt_t - Typedef for format specifier and function
 *
 * @fmt: The format specifier character.
 * @fm_t: The function associated with the format.
 */
typedef struct fmt fmt_t;

/* Function prototypes */
int _printf(const char *format, ...);
int print_char(va_list types, char buffer[], int flags, int width,
    int precision, int size);
/* ... other function prototypes ... */
int handle_print(const char *fmt, int *i, va_list list, char buffer[],
    int flags, int width, int precision, int size);
long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);

#endif /* MAIN_H */ 
