# Who knew  printf() could be implemented ?

This repository contains C program for **_printf()** function written as part of the **Low-level programming and Algorithm** project at **Holberton School**. The program is the implementation of C language function printf() which prints the formatted output.


## Project overview

### Compilation:

All files will be compiled with gcc 4.8.4 using the flags:  -Wall -Werror -Wextra -pedantic

    gcc -Wall -Werror -Wextra -pedantic *.c

### Betty coding style:

All files are written in C and follows the Betty coding style for Holberton School. For more detail, check this page:
Betty wiki

### Authorized functions and macros

* write (man 2 write)
* malloc (man 3 malloc)
* free (man 3 free)
* va_start (man 3 va_start)
* va_end (man 3 va_end)
* va_copy (man 3 va_copy)
* va_arg (man 3 va_arg)
* _putchar(char c)

## Function prototypes

All function prototypes used to compile _printf() are included in the header file **holberton.h**:
*    int (*get_func(const char *format))(va_list);
*    int _putchar(char c);
*    int _printf(const char *format, ...);
*    int print_str(va_list args);
*    int print_char(va_list args);
*    int print_pct(va_list args);
*    int print_dec(va_list args);

## File description

* **_printf.c:** - contains the function _printf()
* **_putchar.c:** - contains the function _putchar()
* **man_3_printf:** - manual page for  _printf() function.
* **get_functions.c** - contains the function get_func()
* **file_functions.c** - contains the functions print_char, print_str and print_pct for the case of printing character, string and '%'
* **file_func_dec_int.c** - contains the function print_dec for the case of printing decimal and integer
* **holberton.h** - contains all headers, prototypes and structure declaration

## Function description

##### int _printf(const char *format, ...)
This function produces output under the control of a *format string* that specifies how subsequent arguments (or arguments accessed via the variable-length argument of stdarg(3)) are converted for output.

The **format string** is composed of zero or more directives:
Ordinary characters that are copied unchanged to the output stream. (except %)
Conversion specifications, each of which results in fetching zero or more subsequent arguments. Each conversion specification starts with the character %, ends with a conversion specifier ( which is a letter).

The **conversion specifier:**
The conversion specifier is a letter that specifies the type of conversion to be applied. Our program includes the following conversion   specifiers:
   **d:**	   decimal number to be provided for printing.
   **i:**	   integer to be provided for printing
   **c:**	   character to be provided for printing
   **s:**	...The const char * argument is expected to be a pointer to an array of character type (pointer to a string).
   **%:**	    A per cent sign '%' is written. No argument is converted.

**Return value:** Upon success, _printfs return the number of characters printed (excluding the null byte used to end output to strings)
A negative 1 is returned if an output error is encountered.

##### int (*get_func(const char *format))(va_list)

This function called by *_printf()* and checks for valid conversion specifier when it finds a '%' character. The *get_func function will check for the right conversion specifier. Upon valid specifier, it returns the corresponding function.

##### int print_char(va_list args)

This function gets a variadic argument and prints each character of char type.

##### int print_str(va_list args)
This function gets a variadic argument, traverse the string, and prints a character at a time. 

##### int print_pct(va_list args)
This function prints a per cent sign '%'.

##### int _putchar(char c)
writes the character c to standard output

## Examples

##### _printf("Negative:[%d]\n", -762534);
Negative:[-762534]

##### _printf("Character:[%c]\n", 'H');
Character:[H]

##### _printf("Actual     : %s\n", "holberton");
Actual     : holberton

## Author
##### Battsetseg Yondongombo,
Holberton School, Cohort 13
##### Natalia Ponsard,
Holberton School, Cohort 13