#ifndef MAIN_H
#define MAIN_H

/****Helper functions****/
/*get the string length*/
int _strlen(const char *);

/*putchar*/
int _putchar(char c);

/*0x14 bit manipulation*/
/*convert a binary number to unsigned int*/
unsigned int binary_to_uint(const char *b);

/*convert integer to binary*/
void print_binary(unsigned long int n);

/*get the bit at a particular index*/
int get_bit(unsigned long int n, unsigned int index);

/*set the bit at a given index to 1*/
int set_bit(unsigned long int *n, unsigned int index);

/*set the bit at a given index to 0*/
int clear_bit(unsigned long int *n, unsigned int index);

/*flip bits*/
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/*get the endianness*/
int get_endianness(void);

#endif
