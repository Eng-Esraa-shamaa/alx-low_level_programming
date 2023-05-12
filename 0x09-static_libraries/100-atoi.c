#include "main.h"
/**
 *_atoi - convert string to integer
 *@s: the string to be converted
 *Return: num2
 */
int _atoi(char *s)
{
int i = 0;
int num = 1;
int ispos = 0;
unsigned int num2 = 0;

while (s[i])
{
if (s[i] == 45)
{
ispos = 0;
num *= -1;
}
while (s[i] >= '0' && s[i] <= '9')
{
ispos = 1;
num2 = (num2 * 10) + (s[i] - '0');
i++;
}
if (ispos == 1)
{
break;
}
i++;
}
num2 = num2 *num;
return (num2);
}
