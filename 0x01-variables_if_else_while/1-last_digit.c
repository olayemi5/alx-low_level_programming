#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
        int n;
        char msg[100];
        int LastDigit;
        srand(time(0));
        n = rand() - RAND_MAX / 2;
        LastDigit = n % 10;
        if(n > 5 )
          {
            char msg1[] = "and is greater than 5";
            strcpy(msg, msg1);
          }
        else if(n == 0)
          {
            char msg2[] = "and is 0";
            strcpy(msg, msg2);
          }
        else if(n < 6 && n != 0)
          {
            char msg3[] = "and is less than 6 and not 0";
            strcpy(msg, msg3);
          }
        printf("Last digit of %d is %d %s \n", n, LastDigit,msg);
        return (0);
}
