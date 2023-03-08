#include "main.h"

/**
<<<<<<< HEAD
 * _memset - Fills the first n bytes of the memory area
 * pointed to by @s with the constant byte @c.
 * @x: A pointer to the memory area to be filled.
 * @c: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 * description _memset: over there
 *
 * Return: A pointer to the filled memory area @s.
 *
 */

void *_memset(void *x, int c, size_t n)
{
        unsigned int index;
        unsigned char *memory = x, value = c;

        for (index = 0; index < n; index++)
        memory[index] = value;
        return (memory);
=======
 * *_memset - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
>>>>>>> 8d842e28683eda54a98cd33872bb364c4d1b3540
}
