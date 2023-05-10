#include"main.h"
/**
*_strlen_recursion - get the length of string
*@s: the string to be checked
*Return: one or zero
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
/**
*check_palindrome - check if string is palindrome
*@s: the string to be checked
*@x: the checker in string
*@str_len: length of string
*Return: one or zero
*/
int check_palindrome(char *s, int x, int str_len)
{
if (*(s + x) != *(s + str_len - 1))
return (0);
if (x >= str_len)
return (1);
return (check_palindrome(s, x + 1, str_len - 1));
}
/**
*is_palindrome - check if string is palindrome
*@s: the string to be checked
*Return: one or zero
*/
int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
return (check_palindrome(s, 0, _strlen_recursion(s)));
}
