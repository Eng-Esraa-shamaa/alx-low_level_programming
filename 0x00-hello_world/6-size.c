#include<stdio.h>
/**
 *main - main function return zero
 *printf - used to printout statements
 *sizeof - used to get the size of any data types
 *Description:this program tells us the size of each data type in c
 *Return: the function return zero
 */
int main(void)
{
printf("Size of a char: %d byte(s)", sizeof(char));
printf("\nSize of an int: %d byte(s)", sizeof(int));
printf("\nSize of a long int: %d byte(s)", sizeof(long int));
printf("\nSize of a long long int: %d byte(s)", sizeof(long long int));
printf("\nSize of a float: %d byte(s)\n ", sizeof(float));
return (0);
}
