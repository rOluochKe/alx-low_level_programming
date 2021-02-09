#include "holberton.h"
/**
 * print_alphabet_x10 - print lowercase alphabets 10 times
 */
void print_alphabet_x10(void)
{
  int i = 48;
  char c;

  while (i <= 57)
    {
      c = 'a';
      while (c <= 'z')
	{
	  _putchar(c);
	  c++;
	}
      _putchar('\n');
      i++;
    }
}
