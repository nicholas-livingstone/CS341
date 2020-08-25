#include <stdio.h>
#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
    int x, 
        set; 

    /*A*/ 

    set = 0; 
    x = 0; 

    while(x) {
        set |= (x & 1); /*check if current lsb is set to 1*/
        x >>= 1; /*move to next bit*/ 
    }

    printf("Returns: %d\n", set);


    return 0;
}
