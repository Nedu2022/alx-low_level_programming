#include <unistd.h>
/**
*main - Entry point
*
*Return: nothing
*/


int _putchar(char c)
{
return (write(1, &c, 1));
}