#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

int main()
{
    char arrey[50];
    int tmp, i, sum = 0, global=1, finalSum = 0;
    for(;;)             // always true
    {
        printf("New Sequence: \n");
        scanf("%s",arrey);
        int pom = strlen(arrey);             //null-terminate a
        arrey[pom+1] = '\0';

        for(i=0; i<(int)strlen(arrey); i++)
        {
            if(isdigit(arrey[i]))             // digit by digit
            {
                tmp= arrey[i] - '0';         // converting to int whit ASCII
                sum=(sum*global)+tmp;
                global = 10;
            }
            if(arrey[i]=='.')
            {
                finalSum+=sum;
                printf("%d",finalSum);
                return 0;
            }
        }
        finalSum+=sum;
        global=1;
        sum = 0;
    }
    return 0;
}
