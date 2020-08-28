/* 
 * Write c expressions to generate the bit patterns that follow, 
 * where a^k represents k repetitions of symbol a. Assume a w-bit data type.
 * Your code may contain references to parameters j and k, representing 
 * the values of j and k, but not a parameter representing w.
 *
 * A. 1^w-k 0^k
 * B. 0^w-k-j 1^k 0^j
 */

#include <stdlib.h>
#include <stdio.h>

int pattern_a(int k);
int pattern_b(int j, int k);
void print_bin(int n);

int main(int argc, char const *argv[])
{
    int a, b, j, k;

    printf("j:");
    scanf("%d", &j);
    printf("A: ");
    a = pattern_a(j);
    printf("0x%X\n", a);


    printf("j:");
    scanf("%d", &j);
    printf("k:");
    scanf("%d", &k);
    printf("B: ");
    b = pattern_b(j,k);
    printf("0x%X\n", b);

    return 0;
}

int pattern_a(int k)
{
    int pattern = 1; 
 
    /* Form mask with k bits enabled and invert the pattern */
    pattern = ~(((pattern << (k-1))-1) + (pattern << (k - 1))); 
    
    return pattern;
}

int pattern_b(int j, int k)
{
    int pattern = 1; 

    /* Form mask with k bits enabled */
    pattern = ((pattern << (k-1))-1) + (pattern << (k - 1));

    pattern <<= j;      /* Shift pattern j spaces left */

    return pattern; 
}