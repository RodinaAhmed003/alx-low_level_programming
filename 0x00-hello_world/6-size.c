#include<stdio.h>

/**
 * main - main function 
 *
 * Return : 0 on success
 */
int main(void)
{
        printf("Size of a char: %lu  byte(s)",sizeof (char));
        printf("Size of an int: %lu 4 byte(s)",sizeof (int));
        printf("Size of a long int: %lu 4 byte(s)",sizeof(long int));
        printf("Size of a long long int:%lu 8 byte(s)",sizeof(long long int));
        printf("Size of a float: %lu 4 byte(s)",sizeof(float));
        return(0);
}
