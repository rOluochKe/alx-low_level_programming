#include "holberton.h"
/**
 * print_alphabet - print lowercase alphabets
 */
void print_alphabet(void)
{
  char c = 'a';

  while (c <= 'z')
    {
      _putchar(c);
      c++;
    }

  _putchar('\n');
}
