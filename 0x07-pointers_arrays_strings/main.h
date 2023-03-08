#ifndef MAIN_H
#define MAIN_H

/*fill the memory with constant bytes*/
char *_memset(char *s, char b, unsigned int n);

/*copy memory area*/
char *_memcpy(char *dest, char *src, unsigned int n);

/*locate a character in a string*/
char *_strchr(char *s, char c);

/**/
unsigned int _strspn(char *s, char *accept);

#endif
