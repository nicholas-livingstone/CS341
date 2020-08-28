/* 
    Problem 2.61
    Write C Expressions that evaluate to 1 when
    the following conditions are true and 0
    when they are false. Assume x is a type of int
*/

#include <stdio.h>
#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
    int x, 
        result,
        w = sizeof(int) << 3, 
        mask; 

    /*A~~~~~~~~~~~~~~~~~~~~~~~~~~*/ 
    /* Any bit of x equals 1 */
    printf("Part A\n");
    printf("Enter x: ");
    scanf("%d", &x); 

    result = ((x | (~x + 1)) >> (w-1)) & 1;

    printf("Returns: %d\n\n", result);


    /*B~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    /* Any bit of x equals 0 */
    printf("Part B\n");
    printf("Enter x: ");
    scanf("%d", &x); 

    result = ((~x | (x + 1)) >> (w - 1)) & 1;

    printf("Returns: %d\n\n", result);

    /*C~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    /* Any bit of the least sig byte of x = 1 */
    printf("Part C\n");
    printf("Enter x: ");
    scanf("%d", &x); 

    result = (((x & 255)| (~(x & 255) + 1)) >> (w-1)) & 1;

    printf("Returns: %d\n\n", result);

    /*D~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    /* Any bit in the most sig byte of x equals 0 */
    printf("Part D\n");

    x = ~0; 
    mask = ~(255 << (w-8)); /* Calculate mask based on w */
    printf("x=0x%X\n", x);
    result = ((~(x | mask) | ((x | mask) + 1)) >> (w - 1)) & 1;
    
    printf("Returns: %d\n", result);

    return 0;
}
