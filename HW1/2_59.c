#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int x, y,
        lsb,
        result; 

    x = 0x89abcdef;
    y = 0x76543210;

    printf("X: %X\n", x); 
    printf("Y: %X\n", y); 

    lsb = 0xFF;  /* mask for Least significant byte of x */
    
    result = (y & ~lsb) | (x & lsb); 

    printf("Result: 0x%X\n", result); 

    return 0;
}
