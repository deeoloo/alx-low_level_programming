<<<<<<< HEAD
#include "main.h" 
  
 /** 
  * _puts_recursion - Prints a string, followed by a new line. 
  * @s: The string to be printed. 
  */ 
 void _puts_recursion(char *s) 
 { 
         if (*s) 
         { 
                 _putchar(*s); 
                 _puts_recursion(s + 1); 
         } 
  
         else 
                 _putchar('\n'); 
 }
=======
#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
>>>>>>> 0dc0833a1645334cb26c980147195b386a3c1790
