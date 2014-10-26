#include <stdio.h>
#define LENGTH 8

void main()
{
    int i, j, tmp, number[LENGTH] = {95, 45, 15, 78, 84, 51, 24, 12};
    
    for (i = 0; i < LENGTH; i++) {
        for (j = LENGTH - 1; j > i; j--) {
            if (number[j] < number[j-1]) {
                tmp = number[j-1];
                number[j-1] =  number[j];
                number[j] = tmp;
            }
        }
    }
    
    for (i = 0; i < LENGTH; i++) {
        printf("%d ", number[i]);
    }
    printf("\n");
}