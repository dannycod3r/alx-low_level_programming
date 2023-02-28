#ifndef MAIN_H
#define MAIN_H

/*_putchar*/
int _putchar(char c);

/*change the value of n via pointer*/
void reset_to_98(int *n);

/*swap the values of two integers*/
void swap_int(int *a, int *b);

/*string length*/
int _strlen(char *s);

/*puts*/
void _puts(char *str);

/*print reverse string*/
void print_rev(char *s);

/*reverse a string*/
void rev_string(char *s);

/*output every other number/ character starting from first*/
void puts2(char *str);

/*print the last half of the string*/
void puts_half(char *str);

void print_array(int *a, int n);

char *_strcpy(char *dest, char *src);

/*convert string to int*/
int _atoi(char *s);

#endif
