#include <stdio.h>

/**
 * main - Entry point of code
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char acharacter;
int aint;
long along;
long long alonglong;
float afloat;

printf("Size of a char: %lu byte(s)\n", sizeof(acharacter));
printf("Size of an int: %lu byte(s)\n", sizeof(aint));
printf("Size of a long int: %lu byte(s)\n", sizeof(along));
printf("Size of a long long int: %lu byte(s)\n", sizeof(alonglong));
printf("Size of a float: %lu byte(s)\n", sizeof(afloat));

return (0);
}
