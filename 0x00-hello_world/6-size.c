#include <stdio.h>

/**
* main - main function
*
* Return: 0 on success
*/

int main(void)
{
printf("Size of char: %zu byte(s)", sizeof(char));
printf("Size of int: %zu byte(s)", sizeof(int));
printf("Size of float: %zu byte(s)", sizeof(float));
printf("Size of double: %zu byte(s)", sizeof(double));
printf("Size of long: %zu byte(s)", sizeof(long));
printf("Size of long long: %zu byte(s)", sizeof(long long));
return 0;
}
