#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _strlen_recursion - len string
 * @s : strings
 *
 * Return: len strings
 *
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
