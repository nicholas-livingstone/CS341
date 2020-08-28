/* 
 * Problem 2.82
 * We are running programs where values of type int are 32 bits.
 * They are represented in two's compliment, and they are right shifted
 * arithmetically. Values of type unsigned are also 32 bits. 
 * We generated arbitrary values x and y, and convert them to unsigned values
 * as follows:....s
 * 
 * For each of the following C expressions, you are to indicate whether or not
 * the expression always yields 1. If it always yields 1, describe the
 * underlying mathematical principles. Otherwise, give an example of arguments
 * that make it yield 0.
 * 
 * A. (x<y) == (*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int x, y, i, exp; 
    __time_t t; 

    srand((unsigned) time(&t));


    for(i = 0; i < 40; i++)
    {
        x = (rand() % 200) - 100; 
        y = (rand() % 200) - 100; 

        exp = ~x + ~y + 1 == ~(x+y);
        printf("x= %d, y= %d, exp= %d\n", x, y, exp);
    }

    return 0;
}

