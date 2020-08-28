/* HW 1 Problem 2.68
 * Write code for a function with the following prototype:
*/

/* 
 * Mask with least significant n bits set to 1 
 * Examples: n = 6 -> 0x3F, n = 17 -> 0x1FFFF
 * Assume 1 <= n <= w
 */

#include <stdio.h>
#include <stdlib.h>

/* Prototype */
int lower_one_mask(int n);

/* Driver code */
int main(int argc, char const *argv[])
{
    int i;

    for(i = 1; i <= 32; ++i)
    {
        printf("(n)Number of bits to mask: %d\t", i);
        printf("Mask: 0x%X\n", lower_one_mask(i));
    }
    
    return 0;
}

int lower_one_mask(int n)
{
    int mask = 1;

    /* Create Mask */
    mask = ((mask << (n-1))-1) + (mask << (n - 1));

    return mask;
}